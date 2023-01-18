#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>> & interval){
    sort(interval.begin(), interval.end());
    return interval;
}

int main(){
    vector<vector<int>> arr;
    arr = {{1, 3}, {2, 4}, {2, 6}, {8, 9}, {8, 10}, {9, 11}, {15, 18}, {16, 17}};
    vector<vector<int>> ans = merge(arr);
    cout<<"The Overlapping subIntervals are: "<<endl;
    for(auto it: ans){
        cout<<it[0]<<" "<<it[1]<<"\n";
    }
}