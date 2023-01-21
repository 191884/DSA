#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    nums = {1,2,4,5,3};
    int target =7, n1 =0, n2=0;
    int left =0, right = nums.size()-1;
    sort(nums.begin(), nums.end());
    while (left<right)
    {
        if(nums[left] + nums[right] == target){
            n1 = left, n2 = right;
            break;
        }else if(nums[left] + nums[right] > target){
            right--;
        }else{
            left++;
        }
    }
    cout<<"The pairs are: "<<n1<<" "<<n2;
    
}