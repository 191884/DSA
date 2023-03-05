#include<bits/stdc++.h>
using namespace std;

double multiply(int mid, int n){
    double ans = 1.0;
    for(int i = 0; i< n; i++)
        ans = mid*ans;
    return ans;
}

double solve(int n, int m){
    double low = 1;
    double high = n;
    double eps = 1e-7;
    while((high - low) > eps ){
        double mid = (low+high)/2.0;
        if(multiply(mid, n) < m){
            low = mid;
        }else{
            high = mid;
        }
    }
    return low;
}

int main(){
    int n =3, m = 27;
    cout<<n<<"th root of "<<m<<" is "<<solve(n,m);
}