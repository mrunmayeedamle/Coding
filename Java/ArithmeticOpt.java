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

		switch (c) {
			case '+' -> {
				answer = a + b;
				System.out.print(a + " + " + b + " = " + answer);
			}
			case '-' -> {
				answer = a - b;
				System.out.print(a + " - " + b + " = " + answer);
			}
			case '*' -> {
				answer = a * b;
				System.out.print(a + " * " + b + " = " + answer);
			}
			case '/' -> {
				if (b != 0) { 
					answer = a / b;
					System.out.print(a + " / " + b + " = " + answer);
				} else {
					System.out.println("Cannot divide by zero");
				}
			}
			default -> System.out.println("Invalid input.");
		}
		
	}
}