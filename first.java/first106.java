
public class first106 {
    public static void main(String[] args) {
        
        // check Palindrome Number 
        checkPalindrome(123);
        checkPalindrome(121);
    }

    static void checkPalindrome(int n) {
        int original = n, rev = 0;
        
        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }
        
        if (original == rev) {
            System.out.println(original + " is a Palindrome");
        } else {
            System.out.println(original + " is NOT a Palindrome");
        }
    }
    
    
}
