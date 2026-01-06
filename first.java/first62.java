// Shadowing : -


public class first62 {
    static int x = 90;   // this will be shadowed at line 10
    public static void main(String[] args) {
        System.out.println(x);  //90
        
        int x;   // the class variable at line 5 is shadowed by this

        x = 40;
        System.out.println(x);  //40
        fun();
        
    }

    static void fun(){
        System.out.println(x);
    }
    
}
