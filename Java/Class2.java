public class Class2 extends Class1 {
    
    void print2()
    {
        System.out.println("I'm in Class 2.");
    }

    public static void main(String[] args) {
        Class1 obj = new Class1();

        obj.print();
        
        Class2 obj2 = new Class2();

        obj2.print();
    }
}
