import java.util.*;

public class Compare_3_nums{

	public static void main(String[] args) {

		int a, b, c;
		try(Scanner scan = new Scanner(System.in);)
		{
		System.out.println("Enter a: ");
		a = scan.nextInt();
		
		System.out.println("Enter b: ");
		b = scan.nextInt();

		System.out.println("Enter c: ");
		c = scan.nextInt();
		}
		
		if(a > b && a > c){
			
			System.out.print(a + " is greater than " + b + " and " + c); 
}
		else if (b > a && b > c){

			System.out.print(b + " is greater than " + a + " and " + c);
}
		else {

			System.out.print(c + " is greater than " + a + " and " + b);
}
}
}