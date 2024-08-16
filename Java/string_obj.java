public class string_obj {

    String F_name = "Mrunmayee";
    String L_name = "Damle";

    void print()
    {
        System.out.println("First name : " + F_name);
        System.out.println("Last name : " + L_name);
    }
    
    public static void main(String[] args) {
        string_obj str = new string_obj();

        str.print();
    }
}
