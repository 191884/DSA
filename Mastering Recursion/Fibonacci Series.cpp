#include<bits/stdc++.h>
using namespace std;

int fibSeries(int n){
    if(n <= 1) return n;
    return fibSeries(n-1) + fibSeries(n-2);
}

int main(){
    int n = 9;
    cout<<fibSeries(n);
}