#include<bits/stdc++.h>
using namespace std;

int solve(int arr[], int n){
    vector<int> left(n);
    vector<int> right(n);
    int maxi = arr[0];
    for(int i = 0; i< n; i++){
        maxi = max(arr[i], maxi);
        left[i] = maxi;
    }
    maxi = arr[n-1];
    for(int i = n-1; i>=0; i--){ 
        maxi = max(arr[i], maxi);
        right[i] = maxi;
    }
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum += (min(right[i], left[i]) - arr[i]);
    }
    return sum;
}

int main(){
    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = solve(arr, n);
    cout<<"The maximum water that can be trapped is: "<<ans<<"\n";
}