#include<bits/stdc++.h>
using namespace std;

void permutation(string &str, int start, int end){
    if(start==end){
        cout<<str<<endl;
    }
    for(int i = start; i < end; i++){
        swap(str[i], str[start]);
        permutation(str, start+1, end);
        swap(str[i], str[start]);
    }
}

int main(){
    string str = "ABC";
    int n = str.length();
    permutation(str, 0, n);
}