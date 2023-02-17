#include<bits/stdc++.h>
using namespace std;

void printarr(int arr[] ,int n){
    if(n < 0) return;
    printarr(arr ,n-1);
    cout<<arr[n]<<" ";
}

int main(){
    int arr[] = {2, 3, 4, 5, 1};
    int n = 5;
    printarr(arr, n-1);
}