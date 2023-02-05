#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    int maxDiff = -1;
    for(int i = 0; i< n; ++i){
        for(int j = n-1; j>= 0; --j){
            if(arr[j] > arr[i] && maxDiff < (j-i)){
                maxDiff = j -i;
            }
        }
    }
    return maxDiff;
}
int main(){
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = solve(arr, n);
    cout <<"The answer is "<<ans;
}