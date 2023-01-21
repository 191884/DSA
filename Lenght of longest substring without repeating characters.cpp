#include<bits/stdc++.h>
using namespace std;

int solve(string str){
    int n = str.length();
    vector<int> vect(256, -1);
    int left =0, right = 0;
    int len = 0;
    while (right< n)
    {
        if(vect[str[right]] != -1){
            left = max(vect[str[right]] +1, left);
        }
        vect[str[right]] = right;

        len = max(len, right - left + 1);
        right++; 
    }
    return len;
}

int main(){
    string str = "aman";
    int ans = solve(str);
    cout<<"The length of longest substring without repeating characters is: "<<ans;
}