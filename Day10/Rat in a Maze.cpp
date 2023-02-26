#include<bits/stdc++.h>
using namespace std;

void solve(vector<vector<int>> &matrix, int m, int n, int i, int j, string path, vector<vector<int>> &visited, vector<string> &ans ){    
    if( i == m-1 && j == n-1){
        ans.push_back(path);
        return;
    }

    //Down
    if(i + 1 < n && !visited[i + 1][j] && matrix[i + 1][j] == 1){
        visited[i][j] = 1;
        solve(matrix, m, n, i+1, j, path+'D', visited, ans);
        visited[i][j] = 0;
    }
    //Left
    if(matrix[i][j-1] == 1 && j-1 >= 0 && !visited[i][j-1]){
        visited[i][j] = 1;
        solve(matrix, m, n, i, j-1, path+'L', visited, ans);
        visited[i][j] = 0;
    }
    //Right
    if(matrix[i][j+1] == 1 && j +1 < n && !visited[i][j+1]){
        visited[i][j] = 1;
        solve(matrix, m, n, i, j+1, path+'R', visited, ans);
        visited[i][j] = 0;
    }
    //Up
    if(matrix[i - 1][j] == 1 && (i - 1) >= 0 && !visited[i - 1][j]){
    // if (i - 1 >= 0 && !visited[i - 1][j] && matrix[i - 1][j] == 1) {
        visited[i][j] = 1;
        solve(matrix, m, n, i-1, j, path+'U', visited, ans);
        visited[i][j] = 0;
    }
}

int main(){
    vector<vector<int>> matrix = {{1,0,0,0},{1,1,0,1},{1,1,0,0},{0,1,1,1}};
    int m = matrix.size();
    int n = matrix[0].size();
    string path;
    vector<string> ans;
    vector<vector<int>> visited(m, vector<int> (n, 0));

    solve(matrix, m-1, n, 0, 0, path, visited, ans);

    if (ans.size() == 0)
    cout << "F";
    else
        for (int i = 0; i < ans.size(); i++) cout <<ans[i] << " ";
    cout << endl;
    // for(int i= 0; i< m; i++){
    //     for(int j = 0 ; j <n; j++){
    //         cout<<visited[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}