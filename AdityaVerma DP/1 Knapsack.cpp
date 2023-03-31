#include<bits/stdc++.h>
using namespace std;
int solve(int w[], int val[], int W, int n){
    if(n <= 0 || W <= 0){
        return 0;
    }
    if(val[n-1] <= W){
        return max(val[n-1] + solve(w, val, W-val[n-1], n-1) , solve(w, val, W, n-1));
    }else if(val[n-1] > W){
        return solve(w, val , W, n-1);
    }
}
int main(){
    int w[] = {2,4,3,5,7,6};
    int val[]= {20, 40, 30, 50, 70, 60};
    int n = sizeof(w)/sizeof(w[0]);
    int W = 120;
    int maxPro = solve(w, val , W, n);
    cout<<"The max Profit will be "<<maxPro;
}