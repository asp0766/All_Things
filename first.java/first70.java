
// Linear search : - 


// search in array
public class first70 {
    public static void main(String[] args) {
        int[] nums = {23,12,3,34,45,6,7,889,0,7,76,56,4545,4,343,53};
        int target = 4545;
        int ans = linearSearch(nums, target);
        System.out.println(ans);  // this is print the index value of that element

    }
    
    // search in the array : return the index if item found 
    // otherwise if item not found return -1
    static int linearSearch(int[] arr , int target){
        if(arr.length == 0 ){
            return -1;
        }

        // run a for loop 
        for( int i = 0 ; i < arr.length ; i++){
            // check for element at every time index if it is equal to target
            int element = arr[i];
            if(element == target){
                return i;
            }

        }

        // thisl ine will execute if none of the return statements above have executed
        // hence the target not found
        return -1;


    }
    
}
