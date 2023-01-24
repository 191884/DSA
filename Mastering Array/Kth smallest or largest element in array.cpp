#include<bits/stdc++.h>
using namespace std;

// int solve(int arr[], int n, int k){
//     sort(arr, arr+ n);
//     return arr[n -2];
// }

int solve(int arr[], int n, int k){
    set<int> s;
    for(int i = 0; i< n; i++){
        s.insert(arr[i]);
    }
    int ans;

    set<int>:: iterator itr;
    for(itr = s.begin(); itr != s.end(); itr++){
        ans = *itr;
    }
    return ans;
}

int main(){
    int arr[6] =  {7, 10, 4, 3, 20, 15};
    int ans =solve(arr, 6, 2);
    cout<<"K'th Largest element is: "<<ans;
}