#include<bits/stdc++.h>
using namespace std;

void fibSeries(int n){
    static int t1 = 0, t2 = 1;
    if(n > 0){
        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout<<nextTerm<<" ";
        fibSeries(n-1);
    }
}

// int fibSeries(int n){
//     if(n <= 1) return n;
//     return fibSeries(n-1) + fibSeries(n-2);
// }

int main(){
    int n = 9;
    cout<<"0 1 ";
    fibSeries(n-2);
}