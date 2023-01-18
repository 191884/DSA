#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> arr;
    arr = {{1,2,3},{4,5,6},{7,8,9}};
    int n = arr.size();
    vector<vector<int>> temp (n, vector<int> (n,0)); 
    for(int i =0;i<arr.size(); i++){
        for(int j = 0; j<arr[0].size(); j++){
            temp[j][n-i-1]= arr[i][j];
        }
    }
    for (int i = 0; i < temp.size(); i++) {
    for (int j = 0; j < temp[0].size(); j++) {
      cout << temp[i][j] << " ";
    }
    cout << "\n";
  }
}