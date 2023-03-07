#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int k){
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == k ){
            return mid;
        }
        else if(arr[mid]< k){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return high+1;
}

int main(){
    int arr[6] = {1, 3, 5, 8, 11};
    int K = 9;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The position would be: "<<solve(arr, n, K);
}