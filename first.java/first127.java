// Non-Static Member : -


class Demo {
    int num = 10;  // Non-static variable

    void display() {   // Non-static method
        System.out.println("Non-Static Method: Num = " + num);
    }
}

public class first127{
    public static void main(String[] args) {
        Demo obj = new Demo();
        obj.display();  // Object required
    }
}

