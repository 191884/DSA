#include<bits/stdc++.h>
using namespace std;

void findSubArray(int arr[], int n){
    unordered_map<int, int> hM;
    int sum =0;
    int max_len= 0, ending_index = -1;

    for(int i =0; i< n; i++){
        arr[i] = (arr[i] == 0)? -1: 1;
    }

    for(int i = 0; i< n; i++){
        sum += arr[i];

        if(sum == 0){
            max_len = i+1;
            ending_index = i;
        }
        if(hM.find(sum) != hM.end()){
            if(max_len < i - hM[sum]){
                max_len = i - hM[sum];
                ending_index = i;
            }
        }else hM[sum] = i;
    }
    cout<<"Largest Subarray is "<<ending_index- max_len +1<<" to "<< ending_index;
}

int main(){
    int arr[] = {1, 0, 1, 1, 1, 0, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    findSubArray(arr,n);
    return 0;
}