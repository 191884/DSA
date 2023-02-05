#include<bits/stdc++.h>
using namespace std;
int solve(int arr[], int n){
    int leftMin[n] ;
    leftMin[0] = arr[0];
    for(int i = 1 ; i<n; i++)
        leftMin[i] = min(leftMin[i-1], arr[i]);
 
 
    //leftMin[i] = min{ arr[0...i] }
 
 
    int maxDist = INT_MIN;
    int i = n-1, j = n-1;
 
    while(i>=0  &&  j>=0)
    {
        if(arr[j] >= leftMin[i])
        {
            maxDist = max(maxDist, j-i);
            i--;
        }
        else
            j--;
    }
 
    return maxDist;
}
int main(){
    int arr[] = {34, 8, 10, 3, 2, 80, 30, 33, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = solve(arr, n);
    cout <<"The answer is "<<ans;
}