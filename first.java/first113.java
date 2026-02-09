
import java.util.Arrays;

public class first113{

    // Selection Sort Using Recursion 
    public static void main(String[] args) {
        int[] arr = {5, 3, 8, 4, 2};
        selectionSort(arr, 0, arr.length);
        System.out.println(Arrays.toString(arr));
    }

    static void selectionSort(int[] arr, int start, int n) {
        if (start >= n - 1) {
            return; 
        }

        int minIndex = start;
        for (int i = start + 1; i < n; i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }

        int temp = arr[start];
        arr[start] = arr[minIndex];
        arr[minIndex] = temp;

        selectionSort(arr, start + 1, n);
    }
}

