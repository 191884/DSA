#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int &ans){

    unordered_map<int, int> hash;

    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    
    int max_count = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            ans = i.first;
            max_count = i.second;
        }
    }
    
}

int main(){
    int arr[] = { 100, 20, 100, 30, 200};
    int n = 5;
    int ans= -1;
    solve(arr, n, ans);
    cout<<"Maximux occuring element is: "<<ans;
}