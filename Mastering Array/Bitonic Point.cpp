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

