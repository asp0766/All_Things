// Continue Statement


public class first12 {
    public static void main(String[] args) {
        for(int i = 1; i <= 20; i++) {
            if(i == 2 || i == 8)   // skip these elements and continue the loop
            continue;
            System.out.println(i);
        }
    
    } 
}
