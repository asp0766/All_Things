
public class first107 {
    public static void main(String[] args) {

        // check only array is sorted or not using recursion

        int[] arr = { 1, 23, 4, 23, 454, 2, 45 };
        System.out.println(sorted(arr, 0));
    }

    static boolean sorted(int[] arr, int index) {
        // base condition
        if (index == arr.length - 1) {
            return true;
        }

        return arr[index] < arr[index + 1] && sorted(arr, index + 1);

    }
}