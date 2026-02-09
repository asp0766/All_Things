//  Video 14 : Java Generics & Wrapper Class : -

// Wrapper classes : -

public class first40 {
    public static void main(String[] args) {
        
        // Creating an Integer object using the constructor
        Integer obj = new Integer(10);

        // Creating an Integer object using the valueOf method
        Integer obj2 = Integer.valueOf(12);

        // Autoboxing: assigning an int literal to an Integer reference
        Integer obj3 = 12;

        // Unboxing: converting an Integer object to a primitive int
        int age = obj;

    }
}


// Wrapper Classess : - A Wrapper class in java is a class whose object wraps or contains primitive data types. when we create an object to a wrapper class , it contains a field and in this field , we can store primitive data types.
// Need Of Wrapper classes : - 
// 1. the classes in java.util package handles only objects ans hence wrapper classes help in this case also. 
// 2. data structures in the collection framwork, such as ArrayList and Vector, store only objects ( reference types ) and not primitive types. 
// 3. An object i neeeded to support synchronization in nultithreading.

// AutoBoxing & UnBoxing : - 
// ate automatic conversion of primitive types of the object of their corresponding wrapper classes is known as autoboxing. for example - conversion of int to integer , long to Long , double to Double , etc. 
// it is just the reverse process of autoboxing .automatically converting an object of  a wrapper class to its corresponding primitive type is konwn as unboxing. for example - conversion of Integer to int , Long to long , Double to double , etc .