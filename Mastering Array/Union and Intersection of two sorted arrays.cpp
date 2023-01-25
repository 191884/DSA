#include<bits/stdc++.h>
using namespace std;

void solve(int arr1[], int arr2[], int m, int n){
    int i = 0, j= 0;
    set<int> s;
    for(i, j; i<m || j <n ; i++, j++){
        s.insert(arr1[i]);
        s.insert(arr2[j]);
    }
    cout<<"Union of Arrays is: ";
    for(auto it: s) cout<<it<<" ";

    set<int> intersection;
    set<int> s1;
    for(int i = 0; i< m; i++){
        s1.insert(arr1[i]);
    }
    for(int j = 0; j<n;j++){
        if(s1.count(arr2[j])) intersection.insert(arr2[j]);
    }    
    
    cout<<endl<<"Intersection of Arrays is: ";
    for(auto it: intersection) cout<<it<<" ";
}

int main(){
    int arr1[] = {1, 3, 4, 5, 7};
    int arr2[] = {2, 3, 5, 6};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    solve (arr1, arr2, m, n);
    // cout<<"Arrays After Merge: "<<endl;
    // for(int i = 0; i< 5; i++){
    //     cout<<arr1[i]<<" ";
    // }
    // cout<<endl;
    // for(int i = 0; i<3;i++){
    //     cout<<arr2[i]<<" ";
    // }
}