#include<bits/stdc++.h>
using namespace std;
float solve(int num){
    int start = 0, end = num;
    while(start<= end){
        int mid = (start + end)/2;
        if(mid * mid == num) return mid;
        else if(mid*mid > num) end = mid;
        else start = mid;
    }
    return end;
}
int main(){
    int num = 169;
    cout<<"The squareRoot of "<<num<<" is "<<solve(num);
}