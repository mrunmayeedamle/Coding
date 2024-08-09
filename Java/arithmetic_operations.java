import java.util.*;

public class arithmetic_operations{

	public static void main(String[] args) {

		char c;
		int a, b;
		int answer = 0;

		Scanner scan = new Scanner(System.in);
		System.out.println("Enter a: ");
		a = scan.nextInt();
		
		System.out.println("Enter b: ");
		b = scan.nextInt();

		System.out.println("Enter operation to be performed: ");
		c = scan.next().charAt(0);
		
		if(c == '+'){
			
			answer = a + b;
			System.out.print(a + " + " + b + " = " + answer); 
}
		else if (c == '-'){

			answer = a - b;
			System.out.print(a + " - " + b + " = " + answer);
}
		else if(c == '*'){

			answer = a * b;
			System.out.print(a + " * " + b + " = " + answer); 
}
		else if (c == '/'){

			answer = a / b;
			System.out.print(a + " / " + b + " = " + answer);
}
}
}