#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n, int k){
    int l = 0, r = n-1;
    int mid ;
    int count = 0;

    while (l<=r){
        mid = l + (r - l)/2;
        if(arr[mid] == k) break;
        else{
            if(arr[mid]< k) l = mid+1;
            else r = mid -1;
        }
    }
    int temp = mid;
    while(arr[temp-1] == k){
        count++;
        temp--;
    }
    while(arr[mid] == k){
        count++;
        mid++;
    }
    
    return count;
}

int main(){
    int arr[] = { 1, 1, 2, 2, 2, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 1;
    int ans = solve(arr, n, k);
    cout<<" The Frequency of element "<<k<<" is "<<ans;
}