public class MinimumInRotatedArray {

    public static int solve(int[] nums){
        int n = nums.length;
        int start =0, end = n-1;
        if(nums[start] <= nums[end]) {
            return nums[start];
        }
        while(start<= end){
            int mid = (start + end)/2;
            if(mid > 0 && nums[mid] < nums[mid-1]) return nums[mid];
            if(mid < n-1 && nums[mid] > nums[mid+1]) return nums[mid+1];
            if(nums[start] <= nums[mid]) start = mid + 1;
            else end = mid-1;
        }
        return -1;
    }
    public static void main(String[] args){
        int[] nums = {0, 1, 2, 4, 6, 8, 10};
        System.out.println("The Minimum element is "+ solve(nums));
    }
}
