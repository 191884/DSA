#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    nums = {1, 2, -2, 4, -4};
    int n = nums.size();
    int sum =0, maxi = 0;
    unordered_map<int, int> mpp;
    for(int i = 0; i< n; i++){
        sum += nums[i];
        if( sum == 0){
            maxi = i+1;
        }else{ if(mpp.find(sum) != mpp.end()){
            maxi = max(maxi, i-mpp[sum]);
            }else
                mpp[sum] = i;
        }
    }
    cout <<"Longest Subarray with 0 sum is "<<maxi;
}