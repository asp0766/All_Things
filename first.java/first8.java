// multiplication table by using for loop 
// taking input from user

import java.util.Scanner;


public class first8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a Number :");
        int n = sc.nextInt();
        for(int i =1 ; i <=10 ; i++)
        {
            System.out.println(n + " X " + i + " =" + n  * i );
        }

    }
 
    
}
