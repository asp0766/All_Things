// Video 8 : - OOPs  Classes & Objects & Constructor


public class first21 {

    public static void main(String[] args) {
       Dog d;
       d = new Dog();
       d.name="rex";
       d.bark();
       d.walk();

       Dog d1 = new Dog();
       d1.name = "tommy";
       d1.bark();
       d1.walk();

     
    }
    
}

class Dog{
    String name ;

    void walk()
    {
        System.out.println(name + " is Walking");
    }

    void bark()
    {
        System.out.println(name + " is Barking");
    }
}

// class is a blueprint which defines some properties and behaviors . an object is an instance of a class which has those properties and behaviours attached.
// a class is not allocated memeory when it is defined . an object is allocated memory when it  is created .
// class is logical entity whereas objects are physical entities . 
// a class is declared only once , on the other hand , we can create multiple objects of a class
// a class is a way to arrange data and behaviour information . it is a template that must be implemented by its objects.
// a class can also be seen as an user defined data type where any onject of defined data type has come some predefined properties and behaviors.