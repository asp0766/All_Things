
// Method Overloading : - 

public class first64{
    public static void main(String[] args) {
        MathOperations obj = new MathOperations();
        System.out.println(obj.add(5, 10));      
        System.out.println(obj.add(5, 10, 20)); 
    }
}

class MathOperations {
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
}

