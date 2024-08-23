public class ArithmeticClass {
    float a = 35;
    float b = 5;


    void print(float num)
    {
        System.out.println(num);
    }

    float addition()
    {
        System.out.println("Addition: ");
        float add = a + b;
        return add;
    }

    float subtraction()
    {
        System.out.println("Subtraction: ");
        float sub = a - b;
        return sub;
    }

    float multiplication()
    {
        System.out.println("Multiplication: ");
        float mul = a * b;
        return mul;
    }

    float division()
    {
        System.out.println("Division: ");
        float div = a / b;
        return div;
    }

    public static void main(String[] args) {
        float add, sub, mul, div;
        ArithmeticClass obj1 = new ArithmeticClass();

        add = obj1.addition();
        obj1.print(add);

        ArithmeticClass obj2 = new ArithmeticClass();

        sub = obj1.subtraction();
        obj2.print(sub);

        ArithmeticClass obj3 = new ArithmeticClass();

        mul = obj3.multiplication();
        obj3.print(mul);

        ArithmeticClass obj4 = new ArithmeticClass();

        div = obj4.division();
        obj4.print(div);

    }
}
