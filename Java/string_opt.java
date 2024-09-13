import java.util.*;
public class string_opt {
    public static void main(String[] args) {
        String str;
        System.out.println("Enter your desired string:");
        try(Scanner sc = new Scanner(System.in))
        {      
            str = sc.nextLine();
        }

        
        string_class obj = new string_class();
        obj.stringLength(str);
        obj.stringRemoveWS(str);
        obj.stringUpperCase(str);
        obj.stringLowerCase(str);
        obj.countA(str);
    }
}
