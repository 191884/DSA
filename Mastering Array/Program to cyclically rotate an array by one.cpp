#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
        int temp =arr[n-1];
    for(int i = n-1; i>=0; i--){
        arr[i] = arr[i-1];
    }
    arr[n] =temp;
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}