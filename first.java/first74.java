
// Binary Search ( Order-Agnostic Binary Search ) : - 


public class first74{
    public static void main(String args[]) {
        int arr1[] = {2, 3, 5, 8, 12};  // Ascending order
        int arr2[] = {20, 15, 10, 5, 1}; // Descending order
        int target = 10;
        
        System.out.println(binarySearch(arr1, target)); // Output: -1 (not found)
        System.out.println(binarySearch(arr2, target)); // Output: 2
    }


    

    static int binarySearch(int arr[], int target) {
        int left = 0, right = arr.length - 1;
        boolean isAsc = arr[left] < arr[right]; // Check order

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) return mid;

            if (isAsc) { // Ascending order
                if (arr[mid] < target) left = mid + 1;
                else right = mid - 1;
            } else { // Descending order
                if (arr[mid] > target) left = mid + 1;
                else right = mid - 1;
            }
        }
        return -1; // Not found
    }
}
