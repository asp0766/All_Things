
public class first60 {
    public static void main(String[] args) {
        int a = 10, b = 20;


        int[] swapped = swap(a, b);
        a = swapped[0];
        b = swapped[1];

        System.out.println(a + " " + b); 

        String name = "Rahul";
        name = changeName(name); 
        System.out.println(name);
    }

    static int[] swap(int a, int b) {
        int temp = a;
        a = b;
        b = temp;
        return new int[]{a, b};
    }

    static String changeName(String name) {
        return "Rahul Kumar"; 
    }
}
