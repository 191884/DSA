#include<bits/stdc++.h>
using namespace std;

bool solve(int num){
    int low = 0;
    int high = num;
    int mid =0;
    while(low <= high){
        mid = (high + low)/2;
        if(mid*mid == num ) return true;
        else if(mid* mid < num) low = mid+1;
        else high = mid-1;
    }
    return false;
}
int main(){
    int num = 5;
    if(solve(num)){
        cout<<"The number is perfect square.";
    }else
        cout<<"The Number is not perfect square";
}