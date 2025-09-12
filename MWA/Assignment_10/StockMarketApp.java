import java.util.*;

public class StockMarketApp {
    public static void main(String[] args) {
        new StockMarket().run();
    }
}

class StockMarket {
    private List<Stock> stocks = new ArrayList<>();
    private List<Investor> investors = new ArrayList<>();
    private Scanner scanner = new Scanner(System.in);
    
    class Stock {
        String symbol, name;
        double price;
        Stock(String s, String n, double p) { symbol = s; name = n; price = p; }
    }
    
    class Investor {
        String id, name;
        double balance;
        Map<String, Integer> portfolio = new HashMap<>();
        Investor(String i, String n, double b) { id = i; name = n; balance = b; }
    }
    
    void run() {
        initializeData();
        while (true) {
            System.out.println("\n1. List Stocks 2. List Investors 3. Buy 4. Sell 5. Portfolio 6. Exit");
            int choice = scanner.nextInt();
            switch (choice) {
                case 1: listStocks(); break;
                case 2: listInvestors(); break;
                case 3: tradeStock("buy"); break;
                case 4: tradeStock("sell"); break;
                case 5: viewPortfolio(); break;
                case 6: return;
                default: System.out.println("Invalid choice");
            }
        }
    }
    
    void initializeData() {
        stocks.add(new Stock("AAPL", "Apple", 150.0));
        stocks.add(new Stock("GOOG", "Google", 2800.0));
        investors.add(new Investor("I1", "John", 10000.0));
    }
    
    void listStocks() {
        System.out.println("\nStocks:");
        stocks.forEach(s -> System.out.printf("%s (%s): $%.2f\n", s.name, s.symbol, s.price));
    }
    
    void listInvestors() {
        System.out.println("\nInvestors:");
        investors.forEach(i -> System.out.printf("%s (%s): $%.2f\n", i.name, i.id, i.balance));
    }
    
    void tradeStock(String type) {
        System.out.println("\nInvestors:");
        for (int i = 0; i < investors.size(); i++) 
            System.out.printf("%d. %s\n", i+1, investors.get(i).name);
        
        Investor inv = investors.get(scanner.nextInt()-1);
        listStocks();
        
        System.out.print("Enter stock symbol: ");
        String sym = scanner.next().toUpperCase();
        Stock stock = stocks.stream().filter(s -> s.symbol.equals(sym)).findFirst().orElse(null);
        if (stock == null) { System.out.println("Invalid stock"); return; }
        
        System.out.print("Enter quantity: ");
        int qty = scanner.nextInt();
        
        if (type.equals("buy")) {
            double cost = stock.price * qty;
            if (inv.balance < cost) { System.out.println("Insufficient funds"); return; }
            inv.balance -= cost;
            inv.portfolio.put(sym, inv.portfolio.getOrDefault(sym, 0) + qty);
            System.out.println("Bought successfully");
        } else {
            int owned = inv.portfolio.getOrDefault(sym, 0);
            if (owned < qty) { System.out.println("Not enough shares"); return; }
            inv.balance += stock.price * qty;
            inv.portfolio.put(sym, owned - qty);
            System.out.println("Sold successfully");
        }
    }
    
    void viewPortfolio() {
        System.out.println("\nInvestors:");
        for (int i = 0; i < investors.size(); i++) 
            System.out.printf("%d. %s\n", i+1, investors.get(i).name);
        
        Investor inv = investors.get(scanner.nextInt()-1);
        System.out.printf("\n%s's Portfolio (Balance: $%.2f)\n", inv.name, inv.balance);
        
        double total = inv.balance;
        for (Map.Entry<String, Integer> e : inv.portfolio.entrySet()) {
            Stock s = stocks.stream().filter(st -> st.symbol.equals(e.getKey())).findFirst().get();
            double value = s.price * e.getValue();
            System.out.printf("%s: %d shares @ $%.2f = $%.2f\n", 
                s.symbol, e.getValue(), s.price, value);
            total += value;
        }
        System.out.printf("Total Portfolio Value: $%.2f\n", total);
    }
}