#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> nums;
    nums = {100,200,1,2,3,4};

    set <int> hashset;
    for(int num: nums){
        hashset.insert(num);
    }

    int longestStreak = 0;
    int currentNum=0, currentStreak =0;

    for(int num: nums){
        if(!hashset.count(num-1)){
            currentNum = num;
            currentStreak =1;

        while (hashset.count(currentNum + 1))
        {
            currentNum = currentNum+1;
            currentStreak++;
        }
        longestStreak = max(currentStreak, longestStreak);
        }
    }
    cout<<"The longest consecutive sequence is: "<<longestStreak;
}