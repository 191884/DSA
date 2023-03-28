//point traped between elements less than it
#include<bits/stdc++.h>
using namespace std;

// Naive Approach
// int findMaximum(int arr[], int n) {
// 	    for(int i = 1; i<n; i++){
// 	        if(arr[i]> arr[i+1]&& arr[i]>arr[i-1]){
// 	            return arr[i];
// 	        }
// 	    }
// }

int findMaximum(int arr[], int low, int high, int n) {
	    int mid = low + (high - low)/2;
	    if((mid==0 ||arr[mid] > arr[mid-1]) && (arr[mid] > arr[mid+1]|| mid ==n-1)){
	        return arr[mid];
	    }else{
	         if(arr[mid]<arr[mid-1]&&mid>0){
	            return findMaximum(arr, 0, (mid-1), n);
	    }   else 
	            return findMaximum(arr, (mid+1), high, n);
	    }
	}

int main(){
	int arr[] = {2, 1, 3, 4, 7, 6};
	int n = sizeof(arr)/ sizeof(arr[0]);
	int ans = findMaximum(arr, 0, n, n);
	cout<<ans;
}