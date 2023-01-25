#include<bits/stdc++.h>
using namespace std;

void subarraySum(int arr[], int target, int n){
    int currSum = arr[0], i, start = 0;
    for(int i= 1; i< n ; i++){
        while(currSum > target && start < i-1){
            currSum -= arr[start];
            start++;
        }
        if(currSum == target){
            cout<<"The target sum is between "<<start<<" and "<<i-1;
            return ;
        }
        currSum += arr[i];
    }
    cout<<"No subarray found";
    return;
}

int main(){
    int arr[] = {15, 2, 4, 8, 9, 5, 10, 23};
    int target = 23;
    int n = sizeof(arr)/sizeof(arr[0]);
    subarraySum(arr, target, n);
}