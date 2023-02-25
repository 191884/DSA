#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &matrix, int m, int n, int i, int j, string &output, vector<string> &ans ){
    if( i == m-1 && j == n-1){
        ans.push_back(output);
        cout<<output<<" ";
        return;
    }

    if(matrix[i+1][j] == 1 && i < m && j< n){
        output += "D";
        solve(matrix, m, n, i+1, j, output, ans);
        output.pop_back();
    }
    if(matrix[i][j+1] == 1 && i < m && j< n){
        output += "R";
        solve(matrix, m, n, i, j+1, output, ans);
        output.pop_back();
    }
    
    
}

int main(){
    vector<vector<int>> matrix = {{1,0,0,0},{1,1,0,1},{1,1,1,0},{0,1,1,1}};
    int m = matrix.size();
    int n = matrix[0].size();
    string output;
    vector<string> ans;

    solve(matrix, m, n, 0, 0, output, ans);

    for(int i = 0; i< ans.size(); i++){
            cout<<ans[i]<<" ";
    }
}