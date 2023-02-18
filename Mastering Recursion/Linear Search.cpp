#include<bits/stdc++.h>
using namespace std;

bool BS(int nums[], int target, int left, int right){
    int mid = (left + right)/2;
    if(left >= right) return false;
    if(nums[mid] == target) return true;
    else if(target > nums[mid]) return BS(nums, target, mid+1, right);
    else BS(nums, target, left, mid -1);
}

int main(){
    int nums[] = { 1,3,2,4,6,5};
    int target = 5;
    int right = sizeof(nums)/sizeof(nums[0]);
    if(BS(nums, target, 0, right)){
        cout<<"Number is Present";
    }else cout<<"Number is not Present";
}