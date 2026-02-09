// OOP 2 : Packages , Static & Non-Static , Singleton Class , In-Built Methods : - 


// Package : Create a package  & Use the package in another file : -
// package mypackage;  // Declaring package

public class Car{
    public void display() {
        System.out.println("Car class from mypackage");
    }
}

// import mypackage.Car;  // Importing package

public class first125{
    public static void main(String[] args) {
        Car obj = new Car();
        obj.display();
    }
}


