
public class first104 {
    public static void main(String[] args) {
        

        // Sum of The digits 
        int ans = sum(1342);
        System.out.println(ans);
    }

    static int sum(int n){
        if(n==0){
            return 0 ;
        }

        return(n%10 + sum(n/10));
    }
    
}

