// Math Class Methods : - 


public class first18 {
    public static void main(String[] args) {
        int a = 4 ;
        int b = 7 ;
        System.out.println((Math.min(a,b)));
        System.out.println(Math.sqrt(16));
        System.out.println(Math.pow(3,4));
        System.out.println(Math.abs(-3));
        System.out.println(random());
        System.out.println(Math.floor(5.9));
        System.out.println(Math.ceil(5.1));
        System.out.println(Math.round(5.5));


    }

    public static int random(){
        return (int) (Math.random()*6);
    }
    
}
