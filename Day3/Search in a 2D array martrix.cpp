#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int>> arr, int num){
    if(!arr.size()) return false;
    int low = 0, high = arr.size()*arr[0].size() -1;
    while (low<=high)
    {
        int mid = low +(high-low)/2;
        if(arr[mid/arr.size()][mid%arr.size()] == num){
            return true;
        }
        if(arr[mid/arr.size()][mid/arr.size()]< num){
            low = mid +1;
        }else{
            high = mid-1;
        }
    }
        return false;    
}

int main(){
    vector<vector<int>> arr;
    arr = {{1,2,3}, {4,5,6}, {7,8,9}};
    int num = 4;
    if(search(arr, num)){
        cout<<"No. is Present";
    }else{
        cout<<"No. is Absent";
    }
    
}