#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int mstn = INT_MIN; //mstn = Maximum sum till Now.
    int sum = 0;
    for(int i = 0; i< n; i++){
        sum += arr[i];
        if(sum> mstn) mstn = sum;
        if(sum < 0) sum = 0;
    }
    cout<<"Maximum contiguous sum is "<<mstn<<endl;
}