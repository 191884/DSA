#include<bits/stdc++.h>
using namespace std;

void solve(vector<string> strList, int n, int &ans){
    unordered_map<string, int> hash;
    for(int i = 0; i< n; i++){
        hash[strList[i]]++;
    }
    for(int i = 0; i< n; i++){
        if(hash.at(strList[i]) == 2){
            ans = i;
            return;
        }
    }
}

int main(){
    vector<string> strList = {"Tom", "Jerry", "Thomas", "Tom", "Jerry", 
"Courage", "Tom", "Courage"};
    int n = 8;
    int ans = -1;
    solve(strList, n, ans);
    cout<<ans;
}