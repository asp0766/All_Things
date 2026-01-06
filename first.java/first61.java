
import java.util.Arrays;

public class first61 {
    public static void main(String[] args) {
        // create a array 
        int[] arr = {1,2,3,4,5};
        change(arr);
        System.out.println(Arrays.toString(arr));
        


    }

    static  void change(int[] nums){
        nums[0] = 10;
    }


    
}
