
public class first111{
    // Inverted Triangle pattern using recursion
    public static void main(String[] args) {
        int n = 5; 
        printInvertedTriangle(n);
    }

    static void printInvertedTriangle(int n) {
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}
