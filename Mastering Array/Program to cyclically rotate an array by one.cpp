#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i< n; i++){
        int temp =arr[i-1];
        arr[i] = temp;
    }
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}