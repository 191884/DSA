#include<bits/stdc++.h>
using namespace std;

void powerSet(string ip, int index, string op, vector<string>& ans){
    if(index >= ip.length()){
        ans.push_back(op);
        return;
    }
    powerSet(ip, index + 1, op, ans);
    op.push_back(ip[index]);
    powerSet(ip, index + 1, op, ans);
}

int main(){
    int index = 0;
    string ip = "abc";
    string op ="";
    vector<string> ans;

    powerSet(ip, index, op, ans);
    
    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].length(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}