#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,3,2,4};
    int n= 5;
    int Esum = (n*(n+1))/2;
    int sumArr =0;
    for(int i =0; i<n; i++){
        sumArr += arr[i];
    }
    int ans = n-(Esum- sumArr);
    cout<<"Duplicate element is: "<<ans;

}