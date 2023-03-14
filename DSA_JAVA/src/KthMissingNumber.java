public class KthMissingNumber {
    public static int Solve(int[] arr, int k){
        int start = 0, end = arr.length;
        int mid;
        while (start < end){
            mid = (start + end)/2;
            if(arr[mid]-1-mid < k)
                start = mid+1;
            else
                end = mid;
        }
        return start+ k;
    }

    public static void main(String[] args) {
        int[] arr = {2,3,4,7,11};
        int k = 5;
        System.out.println("The " + k +"th missing number is "+ Solve(arr, k));
    }
}