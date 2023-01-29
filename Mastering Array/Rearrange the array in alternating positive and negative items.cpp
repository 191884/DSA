#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i< n; i++){
        cout<< arr[i] <<" ";
    }
}

void rightRotate(int arr[], int n, int outOfPlace, int cur){
    char temp = arr[cur];
    for(int i = cur; i > outOfPlace; i--){
        arr[i] = arr[i-1];
    }
    arr[outOfPlace] =temp;
}

void rearrange(int arr[], int n){
    int outOfPlace = -1;
    for(int i = 0; i< n; i++){
        if(outOfPlace >= 0 ){
            if(((arr[i] >= 0) && (arr[outOfPlace] <0))|| ((arr[i] < 0)&&(arr[outOfPlace]>= 0))){
                rightRotate(arr, n, outOfPlace, i);

                if(i - outOfPlace >=2){
                    outOfPlace +=2;
                }else{
                    outOfPlace = -1;
                }
            }
        }
        if(outOfPlace ==-1)
            if (((arr[i] >= 0) && (!(i & 0x01)))
                || ((arr[i] < 0) && (i & 0x01))) {
                outOfPlace = i;
            }
    }
}
int main(){
    int arr[]= { -5, -2, 5, 2, 4, 7, 1, 8, 0, -8 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The Given Array is :";
    printArray(arr,n);

    cout<<"\nAfter rearranging Array is :";
    rearrange(arr,n);
    printArray(arr, n);
}