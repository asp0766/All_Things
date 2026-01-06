// Minimum Element In A Array : -



public class first15 {
    public static void main(String[] args) {
        
        int numbers[] = {12, 23, 3, 45, 24, 56, 78, 89, 52, 5}; 

        int min = Integer.MAX_VALUE; 
        for (int number : numbers) {
            if (number < min) {
                min = number; 
            }
        }

        System.out.println("The Minimum Value is: " + min); 
    }


}