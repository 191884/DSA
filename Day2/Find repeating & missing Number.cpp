#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &arr){
    long long int n = arr.size();
    
    long long int S = (n*(n+1))/2;
    long long int P = (n*(n+1)*(2*n+1))/6;
    int missingNum =0, repeatingNum=0;

    for(int i=0; i<n; i++){
        S -= (long long int)arr[i];
        P -= (long long int)arr[i]*(long long int)arr[i];
    }
    missingNum = (S+(P/S))/2;
    repeatingNum = missingNum - S;
    cout<<"The missing number is: "<<missingNum;
    cout<<endl<<"The RepeatingNum is: "<<repeatingNum;
}

int main(){
    vector<int> arr;
    arr ={3,1,2,5,4,6,7,5};
    solve(arr);
}