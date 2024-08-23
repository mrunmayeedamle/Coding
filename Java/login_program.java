import java.util.*;

public class login_program{

	public static void main(String[] args) {

		String username, temp_user, password, temp_pass;
		username = "Tanaj2004";
		password = "TanajisDumb";

		try (Scanner scan = new Scanner(System.in);)
		{
		System.out.println("Enter username: ");
		temp_user = scan.nextLine();
		
		System.out.println("Enter password: ");
		temp_pass = scan.nextLine();

		}
		
		if(username.equals(temp_user) == true && password.equals(temp_pass) == true) {
			System.out.print("Login Successful.");
		}		
		
		else{
			System.out.print("Invalid Credentials.");
		}
	}
}