// Try Catch Finally block : -


public class first38 {
    
    public static void main(String[] args) {

        int a [] = new int[5];

        System.out.println("Hello World...!");

        try
        {
            System.out.println(a[3]);
        }

        catch (Exception e)
        {
            System.out.println("Exceptions Handled");
        }

        finally 
        {
            System.out.println("I will run always");
        }


        System.out.println("Bye Guys...!");
    }
}


// in java , we can also use the finally block after the try...catch block, in the case th finally block is always executed whether there is an exception inside the try block or not.
// it is a good pratice to use finally block to include important cleanup code like closing a file or connection.
// NOTE : there are some cases when a finally block does not execute : 
// use of system.exit() method.
// an exception occurs in the finally block
// the death of a thread.

