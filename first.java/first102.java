
// Recursion : -


public class first102{
    public static void main(String[] args) {

        // reverse the number
        fun(5);

         // print the numbers in increment order
        funRev(5);

        // Factorial of the number
        funFact(3);


    }

    static void fun(int n){
        if(n==0){
            return;
        }
        else{
            System.out.println(n + " "); // 5 4 3 2 1 
            fun(n-1);
        }
    }


    static void funRev(int n){
        if(n==0){
            return;
        }
        
        funRev(n-1);
        System.out.print(n + " ");  // 1  2 3 4 5
    }


    static void funFact(int n){

        int fact= 1;

        if(n==0 || n==1){
            System.out.println(1);
            return ;
        }
        
        for (int i = 2; i <= n ; i++) {
            fact = fact * i ;
            
        }
        System.out.println(fact);
        
    }
}





