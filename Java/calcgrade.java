import java.util.*;

public class calcgrade{

	public static void main(String[] args) {

		float m1, m2, m3, m4, m5, Grade;
		Scanner scan = new Scanner(System.in);

		System.out.println("Enter the 5 grades of the student: ");
		m1 = scan.nextFloat();
		m2 = scan.nextFloat();
		m3 = scan.nextFloat();
		m4 = scan.nextFloat();
		m5 = scan.nextFloat();

		scan.close();

		Grade = (m1 + m2 + m3 + m4 + m5) / 5;

		if(Grade < 50) {

			System.out.print("The student has failed with " + Grade + "grade");
}
		else{

			System.out.print("The student has passed with " + Grade + "grade");
			
}
}
}