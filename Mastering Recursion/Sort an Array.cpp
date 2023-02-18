#include<bits/stdc++.h>
using namespace std;

void insertNum(vector<int> &num, int temp){
    if(num.size() == 0 || num[num.size()-1] <= temp){
        num.push_back(temp);
        return;
    }
    int val = num[num.size()-1];
    num.pop_back();
    insertNum(num, temp);
    num.push_back(val);
    return; 
}

void sortNum(vector<int> &num){
    if(num.size() == 1 ) return;
    int temp = num[num.size()-1];
    num.pop_back();
    sortNum(num);
    insertNum(num, temp);
}

int main(){
    vector<int> num = {2,1,3,5,4};
    sortNum(num);
    for(auto it : num) cout<<it<<" ";
    return 0;
}