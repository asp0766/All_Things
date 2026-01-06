// InnerClass : -


public class first31 {

    class toy
    {
        int price;
    }

    static class playstation
    {
       int price;
    }

    public static void main(String[] args) {
        // toy toy =new first31(). new toy();
        first31 obj = new first31();
        toy toy = obj.new toy();
        toy.price = 45 ;


        playstation p = new playstation();
        p.price = 100;


    }
}



// Inner Class And Nested Static Class in Java : -
// a non-static nested class is a class within another class. it has access to members of the enclosing class ( outer class). it is commonly known as inner class. since the inner class exists within the outer class , you must instantiate the outer class first, in order to instantiate the inner class. 
// unlike inner class, a static nested class cannot access the member variables of the outer class. it is because the static nested class does not require you to create an instance of the outer class.
// using the nested class makes your code more readable and provide better encapsulation.
