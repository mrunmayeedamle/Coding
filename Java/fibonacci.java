import java.util.Scanner;

public class fibonacci {
    int num1 = 0;
    int num2 = 1;
    int num3, i;

    void calculateFibonacci(int num)
    {
        System.out.print(num1 +" "+num2);
        for(i = 2; i < num; i++)
        {
            num3 = num1 + num2;
            System.out.print(" "+num3);
            num1 = num2;
            num2 = num3;
        }
    }

    public static void main(String[] args) {
        int count;
        System.out.println("Enter the limit for the series: ");
        try(Scanner sc = new Scanner(System.in);)
        {
            count = sc.nextInt();
        }
        System.out.println("Fibonacci Series for "+count+"numbers: ");
        fibonacci obj = new fibonacci();
        obj.calculateFibonacci(count);
    }
}
