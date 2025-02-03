class Animal {

    // inner class
       class Reptile {
          public void displayInfo() {
            System.out.println("I am a reptile.");
          }
       }
    
    // static class
       static class Mammal {
          public void displayInfo() {
            System.out.println("I am a mammal.");
          }
       }
    }
    
    public class nestedClass {
       public static void main(String[] args) {
           // object creation of the outer class
          //Outerclass Outerobj = new OuterClass() 
          Animal animal = new Animal();
          
    
          // object creation of the non-static class
          //Outerclass.InnerClass1 InnerObj1 = Outerobj.new InnerClass1
          Animal.Reptile reptile = animal.new Reptile();
          reptile.displayInfo();
           
    
           // object creation of the static nested class
            //Outerclass.InnerClass2 InnerObj2 = new Outerclass.Innerclass2();
          Animal.Mammal mammal = new Animal.Mammal();
          mammal.displayInfo();
    
       }
    }