// Static members : - 


class Demo {
    static int count = 0;  // Static variable

    static void show() {   // Static method
        System.out.println("Static Method: Count = " + count);
    }
}

public class first126{
    public static void main(String[] args) {
        Demo.show();  // No need to create an object
    }
}

