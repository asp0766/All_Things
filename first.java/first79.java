
// Missing number from an array : - 


class first79{
    public static int findMissing(int[] arr, int n) {
        int totalSum = n * (n + 1) / 2; // Sum of first n natural numbers
        int arraySum = 0;

        for (int num : arr) {
            arraySum += num;
        }

        return totalSum - arraySum;
    }

    public static void main(String[] args) {
        int[] arr = {1, 2, 4, 5, 6}; // Missing number is 3
        int n = 6; // Array should contain numbers from 1 to 6

        System.out.println("Missing Number: " + findMissing(arr, n));
    }
}

