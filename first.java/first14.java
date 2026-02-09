// Video 5 : - Array 


public class first14{
    public static void main(String[] args) {

        int age[];  // declaration
        age = new int[5]; //allocation
        age[0] = 10; // initialization
        age[1] = 20;
        age[2] = 30;
        age[3] = 40;
        System.out.println(age[0]);
        System.out.println(age[1]);


    // For Loop : - 
        String name[] = {"Rahul", "Rohan", "Rahul", "Rohan"};
        for ( int i = 0 ; i<name.length;i++)
        {
            System.out.println(name[i]);
        }


    // For Each Loop : - 
        String persons[] = {"Rahul", "Rohan", "Rahul", "Rohan"};
        for (String person : persons)
        {
            System.out.println("For Each Loop : " + person);
        }



        
        
    }
}