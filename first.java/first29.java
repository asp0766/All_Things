// Video 11 : - Java Abstraction & Java Interfaces 
//  functional Interface and Lambda Expressions


public class first29 {
    public static void main(String[] args) {
        
        // vehicle v1 = new vehicle() ;

        car c1 = new car();
        c1.accelarate();
        c1.brake(4);
        c1.honks();
    }
    
}


abstract class vehicle 
{
    abstract void accelarate();
    abstract int brake(int wheels);

    void honks()
    {
        System.out.println("Vehicle is honking");
    }

}

class car extends vehicle
{
    @Override  // i am overriding from somewhere
    void accelarate() 
    {
        System.out.println("accelarate the car");
        
    }

    @Override
    int brake(int wheels) 
    {  
        System.out.println("Car Brakes Are Pushed...!");
        return wheels;
        
    }

    @Override
    void honks()
    {
        System.out.println("Vehicle is honked");
    }
}

// java abstract class : - 
// the abstract class in java cannot be instantiated(we cannot create objects od abstract classes). we use the abstract keyword to declare an abstract class.
// an abstract class can have both the regular methods and abstract methods.
// a method that does not have its body is known as an abstract method. 
// though abstract classes cannot be instantiated , we can create subclasses from it . we can access members of the abstract class using the object of the subclass.
// if the abstract class includes any abstract method , then all the child classes inherited from the abstract superclass must provide the implementation the abstract method.
// abstraction is an important concept of object-oriented programming that allows us to hide unnecessary details and only show needed information. this allows us to manage complexity by omitting or hiding details with a simpler , higher-level idea.