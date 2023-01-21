#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    nums = {2,2,3,1,1,2,3,1};
    int target = 9;
    int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        int target3 = target - nums[i];
        for(int j =i+1; j<n;j++){
            int target2 = target3 - nums[j];
            int front = j+1;
            int back = n-1;
            while(front<back){
                int two_sum = nums[front]+nums[back];
                if(two_sum < target2) front++;
                else
                if(two_sum >target2) back++;
                else{
                    vector<int> quadruplet(4, 0);
                    quadruplet[0] = nums[i];
                    quadruplet[1] = nums[j];
                    quadruplet[2] = nums[front];
                    quadruplet[3] = nums[back];
                    res.push_back(quadruplet);
                    while(front< back && nums[front] == quadruplet[2]){
                        ++front;
                    }
                    while (front<back && nums[back] == quadruplet[3])
                    {
                        --back;
                    }
                }
            }
            while(j+1< n && nums[j+1] == nums[j]) ++j;
        }
        while (i+1<n && nums[i+1] == nums[i]) ++i;
    }  
    for(int i = 0; i< res.size(); i++){
        for(int j= 0 ; j < res[i].size(); j++){
            cout<< res[i][j]<<" ";
        }
        cout<<endl;
    }  
}