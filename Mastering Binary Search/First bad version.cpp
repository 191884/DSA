#include<bits/stdc++.h>
using namespace std;
int solve(int nums[], int n){
    int start = 0, end = n-1;
    while(start < end){
        int mid = (start+end)/2;
        if(nums[mid] != nums[mid+1]) end = mid;
        else start = mid+1;
    }
    return end+1;
}
int main(){
    int nums[] = {0,0,0,0,0,1,1};
    int n = sizeof(nums)/ sizeof(nums[0]);
    cout<<"The first bad version is "<<solve(nums, n);
}