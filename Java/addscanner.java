import java.util.*;

public class addscanner{

	public static void main(String[] args) {

		int a, b, sum;
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter a: ");
		a = scan.nextInt();
		
		System.out.println("Enter b: ");
		b = scan.nextInt();
		sum = a + b;

		System.out.println("Sum of " + a + " and " + b + " is: " + sum);
}
}