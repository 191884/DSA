#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row, int col, vector<string> board, int n){
    int tempRow = row;
    int tempCol = col;

    while(tempRow >= 0 && tempCol >= 0){
        if(board[tempRow][tempCol] == 'Q'){
            return false;
        }
        tempRow--;
        tempCol--;
    }
    tempCol = col;
    tempRow = row;
    while(tempCol >= 0){
        if(board[tempRow][tempCol] =='Q'){
            return false;
        }
        tempCol--;
    }
    tempRow = row;
    tempCol = col;
    while(tempRow < n && tempCol >= 0){
        if(board[tempRow][tempCol] == 'Q'){
            return false;
        }
        tempRow++;
        tempCol--;
    }
    return true;
}

void solve(int column, vector<string> &board, vector<vector<string>> &ans, int n){
    if(column == n){
        ans.push_back(board);
        return;
    }

    for(int i = 0; i < n; i++){
        if(isSafe(i, column, board, n)){
            board[i][column] = 'Q';
            solve(column+1, board, ans, n);
            board[i][column] = '.';
        }
    }

}

int main(){
    int n = 4;
    vector<vector<string>> ans;
    vector<string> board(n);

    string s(n, '.');
    for (int i = 0; i < n; i++) {
        board[i] = s;
    }

    solve(0, board, ans, n);

    for (int i = 0; i < ans.size(); i++) {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j];
      cout << endl;
    }
    cout << endl;
  }
}