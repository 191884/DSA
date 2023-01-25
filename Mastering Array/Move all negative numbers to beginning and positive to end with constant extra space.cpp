#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    int left=0, right =n-1, mid = 0;
    while (mid != right){
        if(arr[mid] < 0) swap(arr[mid], arr[left]), left++, mid++;
        else swap(arr[mid], arr[right]), right--, mid++;
    }
}

int main(){
    int arr[] ={ -12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n= sizeof(arr)/sizeof(arr[0]);
    solve (arr, n);
    for(int i =0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}