

import java.util.ArrayList;
public class first109{
    public static void main(String[] args) {

        // Return an Arraylist using Recursion 
        
        int[] arr = {1, 3, 5, 6, 7, 7};
        ArrayList<Integer> ans = find(arr, 6, 0, new ArrayList<>());
        System.out.println(ans);
    }

    static ArrayList<Integer> find(int[] arr, int target, int index, ArrayList<Integer> list) {
        if (index == arr.length) {
            return list;
        }
        if (arr[index] == target) {
            list.add(index);
        }
        return find(arr, target, index + 1, list);
    }
}

