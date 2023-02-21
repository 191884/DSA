#include<bits/stdc++.h>
using namespace std;

void powerSet(vector<int> nums, vector<int> output, int index, vector<vector<int>>& ans, set<vector<int>> &s1){
    if(index >= nums.size()){
        if(s1.count(output) == 0)
            ans.push_back(output);
        
        s1.insert(output);
        return;
    }

    powerSet(nums, output, index+1, ans, s1);
    output.push_back(nums[index]);
    powerSet(nums, output, index +1, ans, s1);
}

int main(){
    vector<int> nums = {1,2,3};
    vector<vector<int>> ans;
    set<vector<int>> s1;
    vector<int> output;
    int index = 0;

    powerSet(nums, output, index, ans, s1);

    for(int i = 0; i< ans.size(); i++){
        for(int j = 0; j< ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}