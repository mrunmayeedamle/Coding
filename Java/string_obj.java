import java.util.*;

public class string_obj {


    void printName(String firstName, String lastName)
    {
        System.out.println("First name : " + firstName);
        System.out.println("Last name : " + lastName);
    }
    
    public static void main(String[] args) 
    {
        String first, last;
        try(Scanner scan = new Scanner(System.in);)
        {
        System.out.println("Enter your first name: ");
        first = scan.nextLine();

        System.out.println("Enter your last name: ");
        last = scan.nextLine();

        string_obj str = new string_obj();
        str.printName(first, last);
    }
}
}