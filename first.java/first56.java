
import java.util.Scanner;


public class first56 {
    public static void main(String[] args) {
        // Q : take a input of 2 numbers and print the sum 

        sum();
       
    }


        static void sum(){

        Scanner in = new Scanner(System.in);
        int num1 , num2 , sum ; 
        System.out.print("enter number 1 : ");
        num1 = in.nextInt();

        System.out.print("enter number 2 : ");
        num2 = in.nextInt();
    

        sum = num1 + num2 ; 
        System.out.println("sum is = " + sum);
    }
    
}
