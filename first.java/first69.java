
// 2D Array : - 


import java.util.Scanner;

public class first69{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Create a 2x3 matrix
        int[][] arr = new int[2][3];

        // Taking input
        System.out.print("Enter elements: ");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = sc.nextInt();
            }
        }

        // Printing the array
        System.out.println("Matrix:");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}

