#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    sort(arr, arr+n);
    for(int i  =0; i< n; i= i+2){
        swap(arr[i], arr[i+1]);
    }
}

int main(){
    int arr[] = { 2,7,1,3,5,4,8,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);
    cout<<"The wave array will be";
    for(auto num: arr) cout<<num<<" ";
}