#include<bits/stdc++.h>
using namespace std;

void powerSet(vector<int> nums, int output, int index, vector<int>& ans){
    if(index >= nums.size()){
        ans.push_back(output);
        output = 0;
        return;
    }

    powerSet(nums, output, index+1, ans);
    
    powerSet(nums, output += nums[index], index +1, ans);
}

int main(){
    vector<int> nums = {1,2,3};
    vector<int> ans;
    int output;
    int index = 0;

    powerSet(nums, output, index, ans);

    // cout<<ans[0].size();
    for(int i = 0; i< ans.size(); i++){
        cout<<ans[i]<<" ";
    }
}