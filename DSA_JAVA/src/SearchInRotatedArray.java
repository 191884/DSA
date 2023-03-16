public class SearchInRotatedArray {
    public static void main(String[] args) {
        int[] arr = {13,15,2,3,4,7,11};
        int target =11;
        if(Solve(arr,target))
            System.out.println("Element is Present.");
        else
            System.out.println("Element is Not Present.");
    }

    private static boolean Solve(int[] A, int target) {
        int lo = 0;
        int hi = A.length - 1;
        while (lo < hi) {
            int mid = (lo + hi) / 2;
            if (A[mid] == target) return true;

            if (A[lo] <= A[mid]) {
                if (target >= A[lo] && target < A[mid]) {
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            } else {
                if (target > A[mid] && target <= A[hi]) {
                    lo = mid + 1;
                } else {
                    hi = mid - 1;
                }
            }
        }
        return A[lo] == target;
    }
}
