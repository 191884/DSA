#include<bits/stdc++.h>
using namespace std;

void powerSet(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans){
    if(index >= nums.size()){
        ans.push_back(output);
        return;
    }

    powerSet(nums, output, index+1, ans);
    output.push_back(nums[index]);
    powerSet(nums, output, index +1, ans);
}

//Aditya Verma Solution
// void powerSet(string ip, string op){
//     if(ip.length() == 0){
//         cout<<op<<" ";
//         return;
//     }
//     string op1 = op;
//     string op2 = op;

//     op2.push_back(ip[0]);
//     ip.erase(ip.begin() + 0);
//     powerSet(ip, op1);
//     powerSet(ip, op2);
//     return;
// }

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;

    // string ip = "abc";
    // string op = "";
    // powerSet(ip, op);
    
    powerSet(nums, output, index, ans);
    cout<<ans[0].size();
    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}