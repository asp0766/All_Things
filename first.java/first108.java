
public class first108 {
    public static void main(String[] args) {

        // Linear search by using recursion
        int[] arr = {1 ,3 ,5 ,6 ,7 ,7};
        
        System.out.println(find(arr, 2, 0));
        System.out.println(find(arr, 7, 0));
        
    }
    static boolean find(int[] arr , int target , int index){
        if( index == arr.length){
            return false;
        }
        return arr[index] == target || find(arr , target , index + 1 );

    }  
}
