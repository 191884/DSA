public class SearchInRotatedArray {
    public static void main(String[] args) {
        int[] arr = {13,15,2,3,4,7,11};
        int target = 15;
        if(Solve(arr,target))
            System.out.println("Element is Present.");
        else
            System.out.println("Element is Not Present.");
    }

    private static boolean Solve(int[] nums, int target) {
        int low = 0, high = nums.length, mid ;
        while (low <= high){
            mid = (low + high) >> 2;
            if(nums[mid]  == target) return true;

            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid] >= target)
                    high = mid -1;
                else
                    low = mid+1;
            }
            else {
                if(nums[mid] <= target && target <= nums[high])
                    low = mid +1;
                else
                    high = mid +1;
            }
        }
        return  false;
    }
}
