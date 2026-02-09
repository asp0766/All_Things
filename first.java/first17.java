// Video 6 : - Function And Methods



public class first17 {    
    public static void main(String[] args) {

        int avgFromFunction = avg(12 ,45);
        System.out.println("Average is : " + avgFromFunction);
        greet();
        average(10 ,10);
        
  
    }
    
    static void greet(){
        System.out.println("Hello World");
    }


    public static void average(int a , int b){
        int average =(a+b)/2;
        System.out.println("The Average is : " + average);
    }


    public static int avg(int a , int b){
        int avg = (a+b)/2;
        return avg;
    }



}
