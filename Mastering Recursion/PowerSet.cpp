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

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    powerSet(nums, output, index, ans);
    cout<<ans[0].size();
    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}