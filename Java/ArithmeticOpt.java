import java.util.*;

public class ArithmeticOpt{

	public static void main(String[] args) {

		char c;
		int a, b, answer;

		try(Scanner scan = new Scanner(System.in);)
		{
		System.out.println("Enter a: ");
		a = scan.nextInt();
		
		System.out.println("Enter b: ");
		b = scan.nextInt();

		System.out.println("Enter operation to be performed: ");
		c = scan.next().charAt(0);
		}

		switch(c)
		{
			case '+' : answer = a + b;
			System.out.print(a + " + " + b + " = " + answer); 
			break;

			case '-' :answer = a - b;
			System.out.print(a + " - " + b + " = " + answer);
			break;

			case '*' :answer = a * b;
			System.out.print(a + " * " + b + " = " + answer); 
			break;

			case '/' :answer = a / b;
			System.out.print(a + " / " + b + " = " + answer);
			break;

			default: System.out.println("Invalid input.");
		}
	}
}