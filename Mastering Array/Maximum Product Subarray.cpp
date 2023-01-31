#include<bits/stdc++.h>
using namespace std;

int maxSubarrayProduct(int arr[], int n){
    int maxEH = arr[0];
    int minEH = arr[0];
    int maxSF = arr[0];
    for(int i = 1; i< n; i++){
        int temp = max({arr[i], arr[i]*maxEH, arr[i]* minEH });
        minEH = min({arr[i],arr[i]*maxEH,arr[i]*minEH});
        maxEH =temp;
        maxSF = max(maxSF, maxEH);
    }    
    return maxSF;
}

int main(){
    int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
    int n = sizeof(arr)/ sizeof(arr[0]);
    cout<<"Maximux subarray product is: "<<maxSubarrayProduct(arr,n);

}