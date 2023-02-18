#include<bits/stdc++.h>
using namespace std;

int pow2(int n){
    if(n == 1) return 2;
    return 2*pow2(n-1);
}

int main(){
    int n = 4;
    cout<<"Ans is :"<<pow2(n);
}