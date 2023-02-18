#include<bits/stdc++.h>
using namespace std;

void print1toN(int arr[] ,int n){
    if(n < 0) return;
    print1toN(arr ,n-1);
    cout<<arr[n]<<" ";
}

//for reverse printing array
void printnto1(int arr[], int n){
    if(n == 0){
        cout<<arr[n]<<" ";
        return;
    }
    cout<<arr[n]<<" ";
    printnto1(arr, n-1);
}

int main(){
    int arr[] = {2, 3, 4, 5, 1};
    int n = 5;
    print1toN(arr, n-1);
    cout<<endl;
    printnto1(arr, n-1);
}