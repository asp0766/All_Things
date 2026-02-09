
// Search in 2D Array :::


public class first73{
    public static void main(String[] args) {
        int[][] nums = {
            {23, 12, 3},
            {34, 45, 6},
            {7, 889, 0},
            {90, 7, 76},
            {56, 4545, 4}
        };
        int target = 45;

        int[] ans = linearSearch2D(nums, target);
        System.out.println("Row: " + ans[0] + ", Col: " + ans[1]);
    }

    static int[] linearSearch2D(int[][] arr, int target) {
        if (arr.length == 0) {
            return new int[]{-1, -1};
        }

        for (int row = 0; row < arr.length; row++) {
            for (int col = 0; col < arr[row].length; col++) {
                if (arr[row][col] == target) {
                    return new int[]{row, col};  // Return the row and column index
                }
            }
        }

        return new int[]{-1, -1};  // Target not found
    }
}

