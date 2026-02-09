
// Array Input : - 


import java.util.Scanner;

public class first66{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Enter size of array: ");
        int n = sc.nextInt(); // Read size

        int[] arr = new int[n]; // Create array

        System.out.println("Enter " + n + " elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt(); // Read elements
        }

        System.out.println("Array elements:");
        for (int num : arr) {
            System.out.print(num + " ");
        }

        sc.close();
    }
}
