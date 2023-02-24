#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int start, int end){
    while(start <= end){
        if(str[start++] != str[end--])
            return false;
    }return true;
}

void solve(string str, int index, vector<string>& output, vector<vector<string>>& ans){
    if(index == str.size()){
        ans.push_back(output);
        return;
    }
    
    for(int i = index; i< str.size(); ++i){
        if(isPalindrome(str, index, i)){
            output.push_back(str.substr(index, i - index+1));
            solve(str, index+1, output, ans);
            output.pop_back();
        }
    }

}

int main(){
    string str ="aabb";
    vector<string> output;
    vector<vector<string>> ans;
    solve(str, 0, output, ans);
    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}