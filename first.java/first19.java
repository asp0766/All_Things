// Video 7 : - String in Java


public class first19 {

    public static void main(String[] args) {

        String name = "anuj";
        String sameName = "anuj";
        String newName = new String("anuj");
        System.out.println(name);
        System.out.println(newName);

        if(name == sameName)
        {
            System.out.println("Both are same");
        }

        if (name == newName)
        {
            System.out.println("Both are same");
        }
        else
        {
            System.out.println("Both are not same");
        }

        // Using equals method

        if(name.equals(newName))
        {
            System.out.println("Both are same");
        }




    } 
}
