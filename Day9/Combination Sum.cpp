#include<bits/stdc++.h>
using namespace std;

void powerSet(vector<int> nums, vector<int> output, int index, int target, vector<vector<int>>& ans){
    if(index >= nums.size()){
        if(target == 0){
            ans.push_back(output);
            cout<<ans.size()<<" ";
        }
        return;
    }

    if(nums[index] < target){
        output.push_back(nums[index]);
        powerSet(nums, output, index+1, target - output[index], ans);
    }
    powerSet(nums,output, index+1, target, ans);

}

int main(){
    vector<int> nums = {2,3,6,7};
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    int target = 7;

    powerSet(nums, output, index, target, ans);
    
    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}