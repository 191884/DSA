#include<bits/stdc++.h>
using namespace std;

int maxSubarrayProduct(int arr[], int n){
    int maxEH = 1;
    int minEH = 1;
    int flag =0;
    int maxSF = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]< 0){
            int temp = maxEH;
            maxEH = max(minEH * arr[i], 1);
            minEH = temp * arr[i];
        }else
            if(arr[i] == 0){
                maxEH = 1;
                minEH = 1;
            }
            else{
                maxEH = maxEH * arr[i];
                minEH = min(arr[i]*minEH , 1);
                flag = 1;
            }
        if(maxSF < maxEH) maxSF = maxEH;
    }
    if(maxSF == 0 && flag == 0){
        return 0;
    }
    if(maxSF == 1){
        maxSF = arr[0];
        for(int i = 1; i< n; i++){
            maxSF = max( maxSF, arr[i]);
        }
    }
    return maxSF;
}

int main(){
    int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"Maximux subarray product is: "<<maxSubarrayProduct(arr,n);

}