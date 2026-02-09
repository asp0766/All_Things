// Exception Handling : -


public class first156 {
    public static void main(String[] args) {
        try {
            int result = 10 / 0;
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage()); // Output: Error: / by zero
        }
    }
}
