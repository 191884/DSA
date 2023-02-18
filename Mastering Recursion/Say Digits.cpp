#include<bits/stdc++.h>
using namespace std;

void sayDigit(int n){
    if(n <= 0) return;
    sayDigit(n/10);
    cout<< n%10<<" ";
}

int main(){
    int n = 412;
    sayDigit(n);
}