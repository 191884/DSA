// Find a peak element which is not smaller than its neighbours


// Naive Approach
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    for(int i = 1; i<n; i++){
	        if(arr[i]> arr[i+1]&& arr[i]>arr[i-1]){
	            return arr[i];
	        }
	    }
	}
};

//Using Binary Search

class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int ans = findMaximumE(arr, 0, n, n);
	    return ans;
	}
	
	int findMaximumE(int arr[], int low, int high, int n) {
	    int mid = low + (high - low)/2;
	    if((mid==0 ||arr[mid] > arr[mid-1]) && (arr[mid] > arr[mid+1]|| mid ==n-1)){
	        return arr[mid];
	    }else{
	         if(arr[mid]<arr[mid-1]&&mid>0){
	            return findMaximumE(arr, 0, (mid-1), n);
	    }   else 
	            return findMaximumE(arr, (mid+1), high, n);
	    }
	}
};