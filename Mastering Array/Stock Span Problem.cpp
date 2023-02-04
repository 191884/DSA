#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int arr[], int n){
    int a = 1;
    vector<int> res;
    for(int i = 0 ; i< n; i++){
        a =1;
        for(int j = i; j >=0; j--){
            if(arr[i]>arr[j]) a++;
        }
        res.push_back(a);
    }
    return res;
}

int main(){
    int arr[] = {100,60,80,65, 70,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> res = solve(arr, n);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i]<<" ";
    }
}