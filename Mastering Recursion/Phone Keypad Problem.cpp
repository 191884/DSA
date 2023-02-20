#include<bits/stdc++.h>
using namespace std;

void solve(string digit, string output, string mapping[], int index, vector<string>& ans){
    if(index >= digit.length()){
        ans.push_back(output);
        return;
    }
    int number = digit[index] - '0';
    string value = mapping[number];

    for(int i = 0; i < value.length(); i++){
        output.push_back(value[i]);
        solve(digit,output, mapping, index + 1, ans);
        output.pop_back();
    }
}

int main(){
    string digits = "23";
    vector<string> ans;
    string output = "";
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

    solve(digits, output, mapping, index, ans);

    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j< ans[i].length(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}