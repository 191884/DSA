#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout<< arr[i] <<" ";
    }
}

void rearrange(int arr[], int n){
    // int outOfPlace = -1;
    // for(int i = 0; i< n; i++){
    //     if(outOfPlace >= 0 ){
    //         if(arr[i] )
    //     }
    // }
}
int main(){
    int arr[]= { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The Given Array is :";
    printArray(arr,n);

    cout<<"\nAfter rearranging Array is :";
    rearrange(arr,n);
}