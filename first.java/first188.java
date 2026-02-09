// Count Sort : -

public class first188 {
    public static void main(String[] args) {
        int[] arr = {4, 2, 2, 8, 3, 3, 1};

        countSort(arr);

        System.out.println("Sorted array:");
        for (int num : arr) {
            System.out.print(num + " ");
        }
    }

    public static void countSort(int[] arr) {
        if (arr.length == 0) return;

        int max = findMax(arr);

        int[] count = new int[max + 1];

        // Count occurrences
        for (int num : arr) {
            count[num]++;
        }

        // Fill original array in sorted order
        int idx = 0;
        for (int i = 0; i < count.length; i++) {
            while (count[i]-- > 0) {
                arr[idx++] = i;
            }
        }
    }

    private static int findMax(int[] arr) {
        int max = arr[0];
        for (int num : arr) {
            if (num > max) max = num;
        }
        return max;
    }
}
