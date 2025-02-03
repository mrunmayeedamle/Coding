// Define the Vehicle interface
interface Vehicle {
    void start();
    void stop();
}

// Base class Machine
class Machine {
    void turnOn() {
        System.out.println("Machine is turning on.");
    }
}

// Class Car inheriting from Machine and implementing Vehicle
class Car extends Machine implements Vehicle {
    @Override
    public void start() {
        System.out.println("Car is starting.");
    }

    @Override
    public void stop() {
        System.out.println("Car is stopping.");
    }
}

// Class Bike only inheriting from Machine
class Bike extends Machine {
    // Additional method specific to Bike
    void ride() {
        System.out.println("Bike is riding.");
    }
}

public class hybridInheritance {
    public static void main(String[] args) {
        Car myCar = new Car();
        Bike myBike = new Bike();

        myCar.turnOn();
        myCar.start();
        myCar.stop();

        myBike.turnOn();
        myBike.ride();
    }
}
