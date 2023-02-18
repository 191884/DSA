#include<bits/stdc++.h>
using namespace std;

void revStr(string &str, int left, int right){
    if(left >= right){
        return;
    }
    swap(str[right], str[left]);
    revStr(str, left+1, right -1);
}

int main(){
    string str = "hello";
    int right = str.length();
    revStr(str, 0, right-1);
    cout<<str;
}