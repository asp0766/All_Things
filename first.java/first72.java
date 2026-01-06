

// search in Range :::
public class first72{
    public static void main(String[] args) {
        int[] nums = {23, 12, 3, 34, 45, 6, 7, 889, 0, 90, 7, 76, 56, 4545, 4, 343, 53};
        int target = 21324;
        int start = 5, end = 15 ; 

        int ans = linearSearchInRange(nums, target, start, end);
        System.out.println(ans);
    }

    static int linearSearchInRange(int[] arr, int target, int start, int end) {
        if (arr.length == 0 || start < 0 || end >= arr.length || start > end) {
            return -1;
        }

        for (int i = start; i <= end; i++) {
            if (arr[i] == target) {
                return i;
            }
        }

        return -1;
    }
}
