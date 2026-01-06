// Function OverLoading : - 



public class first22 {


    public int add(int a, int b) {
        return a + b;
    }


    public int add(int a, int b, int c) {
        return a + b + c;
    }

    
    public double add(double a, double b) {
        return a + b;
    }

    public static void main(String[] args) {
        first22 obj = new first22();


        int sum1 = obj.add(5, 10); 
        int sum2 = obj.add(5, 10, 15);
        double sum3 = obj.add(5.5, 10.5);

        System.out.println("Sum of two integers: " + sum1);
        System.out.println("Sum of three integers: " + sum2);
        System.out.println("Sum of two doubles: " + sum3);
    }
}
