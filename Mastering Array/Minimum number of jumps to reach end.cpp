#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    if( n == 1){
         return 0;
    }
    int res = INT_MAX;
    for(int i = n-2 ; i>= 0; i--){
        if( i+ arr[i] >= n-1){
            int sub_res = solve(arr, i+1);
            if(sub_res != INT_MAX)
                res = min(res, sub_res +1);
        }
    }
    return res;
}

int main(){
    int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The minimum number of Jumps need to reach end is: "<<
    solve(arr, n);
}