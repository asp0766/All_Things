
// Variable Argumetns : - 

public class first63{
    public static void main(String[] args) {
        Example obj = new Example();
        obj.sum(10, 20);        // 30
        obj.sum(1, 2, 3, 4, 5); // 15
        obj.sum();              // 0 (no arguments)
    }
}

class Example {
    void sum(int... numbers) { // Accepts multiple int values
        int total = 0;
        for (int num : numbers) {
            total += num;
        }
        System.out.println("Sum: " + total);
    }
}

