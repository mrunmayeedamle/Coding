import java.util.*;
class print{
    void Print()
    {
        System.out.println("Performing Addition operations");
    }

}
class Addition extends print //method overriding
    {
        @Override
        void Print()
        {
            System.out.println("Answer = ");
        }

    }

public class Polymorphism {
    public static void main(String[] args) {
        Addition obj = new Addition();
        
        int num, a, b, c, d;
        float x, y, z;
        double p, q ,r;
        System.out.println("Select operation: \n 1) Addition of 2 integers \n 2)Addition of 3 integers\n 3) Addition of double \n 4) Addition of float \n 5) Exit");
        try(Scanner sc =  new Scanner(System.in))
        {
            num = sc.nextInt();
        
        if (num == 1)
        {
            System.out.println("Enter a = ");
            a = sc.nextInt();
            System.out.println("Enter b = ");
            b = sc.nextInt();

            c = SimpleOpt.Add(a, b);
            obj.Print();
            System.out.println(c);
        }
        else if (num == 2)
        {
            System.out.println("Enter a = ");
            a = sc.nextInt();
            System.out.println("Enter b = ");
            b = sc.nextInt();
            System.out.println("Enter c = ");
            c = sc.nextInt();

            d = SimpleOpt.Add(a, b, c);
            obj.Print();
            System.out.println(d);
        }
        else if(num == 3)
        {
            System.out.println("Enter a = ");
            p = sc.nextDouble();
            System.out.println("Enter b = ");
            q = sc.nextDouble();

            r = SimpleOpt.Add(p, q);
            obj.Print();
            System.out.println(r);
        }
        else if(num == 4)
        {
            System.out.println("Enter a = ");
            x = sc.nextFloat();
            System.out.println("Enter b = ");
            y = sc.nextFloat();

            z = SimpleOpt.Add(x, y);
            obj.Print();
            System.out.println(z);
        }
        else if(num == 5)
        {
            System.exit(5);
        }
        else
        {
            System.exit(0);
        }
     
        }
    }
}
