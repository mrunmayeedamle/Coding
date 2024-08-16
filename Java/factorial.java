import java.util.*;

public class factorial {
    public static void main(String[] args) {
        int fac, n;
        fac = 1;

        Scanner scan = new Scanner(System.in);

        System.out.println("Enter the number you need factorial for:" );
        n = scan.nextInt();
        scan.close();

        for(int i = 1; i <= n; i++)
        {
            fac *= i;
        }

        System.out.println(n + "! = "+ fac);
    }
}
