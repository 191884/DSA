#include<bits/stdc++.h>
using namespace std;

void solve(string str ,int index, int size, vector<string>& ans){
    if(index == size){
        ans.push_back(str);
        return;
    }

    for(int i = index; i < size; i++){
        swap(str[i], str[index]);
        solve(str, index +1 , size, ans);
        swap(str[i], str[index]);
    }

}

int main(){
    int N = 3;
    int K = 3;
    string str;
    vector<string> ans;
    for(int i = 1; i<= N; i++){
        str.push_back(i + '0');
    }

    solve(str, 0, N, ans);

    sort(ans.begin(), ans.end());
    string res;
    for(int i = 0; i< K; i++){
        res = ans[i];
    }
    cout<<"K-th permutation Sequence is "<< res;

}