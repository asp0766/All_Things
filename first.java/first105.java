
public class first105 {
    public static void main(String[] args) {
        

        // Reverse A Number 
        reverseNumber(1234567890);

    }

    static void reverseNumber(int n) {
        int rev = 0;
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        System.out.println(rev);
    }
    
}
