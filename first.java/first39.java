//  Throws & Throws Keyword : - 


public class first39{
    public static void main(String[] args) {
        try {
            checkNumber(-5); // Change this value to test different numbers
        } catch (IllegalArgumentException e) {
            System.out.println("Caught Exception: " + e.getMessage());
        }
    }

    static void checkNumber(int number) {
        if (number < 0) {
            // Throwing an IllegalArgumentException if the number is negative
            throw new IllegalArgumentException("Number must be non-negative.");
        } else {
            System.out.println("The number is: " + number);
        }
    }
}