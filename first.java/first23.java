// Constructor


public class first23 {
    public static void main(String[] args) {
        Complex num1 = new Complex();
        num1.print();
    }
    
}


class Complex
{
    int a , b ;

    public Complex()
    {
        a = 0 ;  // Default Constructor
        b = 0 ;
    }
    void print()
    {
        System.out.println(a+"+"+b+"i");
    }
}


// Constructors are invoked implicity when you instantaite objects
// the two rules for creating a constructor are :
//    a.  the name of the constructor should be same as the class. 
//    b. A java constructor must not have a return type.
// if a class does not have a constructor . the java complier automatically creates a default constructor during run time . the default constructor intializes instance variables with default values . 
// default constructor - a constructor that is automatically created by the java complier if it is not explicity defined . 
// a constructor cannot be abstract or static or final  . 
// a constructor can be overloaded but cannot be overridden.