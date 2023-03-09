#include<bits/stdc++.h>
using namespace std;

set<int> findIntersection(int A[], int B[], int m, int n){
    set<int> ans;
    int i = 0, j = 0;
    while( i < m && j < n )
    {
        if ( A[i] == B[j] && !ans.count(A[i]) ){ 
            ans.insert(A[i]);
            i = i + 1;
            j = j + 1;
        }else {
            if ( A[i] < B[j] )
                i = i + 1;
            else
                j = j + 1;
        }
    }
 
    return ans;
}

int main(){
    int arr1[] = {3,4,5, 7,9};
    int arr2[] = {5, 6, 8, 9};
    set<int> ans = findIntersection(arr1, arr2, 5, 4);
    for(auto it: ans)
        cout<<it<<" ";
}