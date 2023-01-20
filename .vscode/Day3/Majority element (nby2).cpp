#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    arr = {2,2,1,3,4,2,2,2};

    int count = 0, candidate;

    for(int num :arr){
        if(count == 0){
            candidate = num;
        }
        if(num == candidate){
            count++;
        }else{
            count--;
        }
    }
    cout<<"Majority Element > N/2 is : "<<candidate;
}