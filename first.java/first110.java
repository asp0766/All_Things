
import java.util.ArrayList;

public class first110{
    public static void main(String[] args) {

        // Return the list without passing argument using recursion
        int[] arr = {1, 3, 5, 6, 7, 7};
        ArrayList<Integer> ans = find(arr, 6, 0);
        System.out.println(ans);
    }

    static ArrayList<Integer> find(int[] arr, int target, int index) {
        ArrayList<Integer> list = new ArrayList<>();
        
        if (index == arr.length) {
            return list;
        }

        if (arr[index] == target) {
            list.add(index);
        }

        list.addAll(find(arr, target, index + 1));
        return list;
    }
}

