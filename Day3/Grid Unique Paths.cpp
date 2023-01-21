#include<bits/stdc++.h>
using namespace std;

int UniqueGrid(int i, int j, int m, int n){
    if(i >=m||j>=n) return 0;
    if(i == m-1 && j == n-1) return 1;
    return UniqueGrid(i+1, j, m, n)+ UniqueGrid(i, j+1, m, n);
}

int main(){
    vector<vector<int>> arr;
    arr = {{1,2},{4,3}};
    int ans=UniqueGrid(0, 0, 3, 3);
    cout<<"The total Unique grid paths are: "<<ans;
}