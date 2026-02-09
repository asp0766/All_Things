// Video 13 : - Exception 

// TRY CATCH BLOCK : - 
public class first37 {
    public static void main(String[] args) {

        int a[] = new int[5];

        System.out.println("Hello World...!");

        try{ 
            int result = 5 /0 ;

            System.out.println(a[8]);
        }

        // catch (ArrayIndexOutOfBoundsException e)
        // {
        //     System.out.println("Tried to access the out of bound element");

        // }

        // catch(ArithmeticException e)
        // {
        //     System.out.println(e.getStackTrace());
        //     System.out.println(e.getMessage());
        //     System.out.println(e.toString());
        // }


        catch(ArrayIndexOutOfBoundsException | ArithmeticException e)
        {
            System.out.println("Handling the exception...!");
        }

        System.out.println("Bye Guys...!");
        
        

    }
    
}



// Java Exception : - 

// An Exception is an unexpected event that occurs during program exection . it affects the flow of the program instructions which can cause the program to terminate abnormally. 
// An Exception can occur for many reasons. Some of them are :
// Invalid user input 
// Device Failure 
// Loss of network connection 
// Physical limitatins ( out of disk memory )
// Code errors 
// Opening an unavailble file 


// Java Runtime Exception : -
// a runtime exception happens due to a programming error. they are also known as unchecked exceptions. these exceptions are not checked at compile-time but run time. some of the common runtime exceptions are :
// null pointer access ( missing the intialization of a variable ) - NullPointerException
// out of bounds array access - ArrayIndexOutOfboundsException
// Divding a number by 0 - ArthimeticException
// you can think about it in this way . " if it is a runtime exception,it is your fault".

// An IOException is also known as a checked exception. they are checked by the compiler at thr comile-time and the programmer is prompted to handle these exceptions.
// some of the examples of checked exceptions are : 
// trying to open a file that does not exist results in FileNotFoundException.
// Trying to read past the end of a file 

// Java Compile Time Exception : -
// 
