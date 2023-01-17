#include<bits/stdc++.h>
using namespace std;


void pri(vector<vector<int>> arr){
    int rows = arr.size();int cols = arr[0].size();
    for(int i = 0; i< rows;i++){
        for(int j = 0; j< cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solve(vector<vector<int>> arr){
    int row = arr.size();
    int col = arr[0].size();
    int rows[row] = {0};
    int cols[col] = {0};
    for(int i = 0; i< row; i++){
        for(int j = 0; j< col; j++){
            if(arr[i][j] == 0){
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    for(int i = 0; i<row; i++){
        for(int j = 0; j < col; j++){
            if(cols[j] == 1 || rows[i] ==1){
                arr[i][j] = 0;
            }
        }
    }
    cout<<"Array After Processing\n";
    pri(arr);

}

int main(){
    vector<vector<int>> arr;
    arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    cout<<"Array Before Processing:\n";
    pri(arr);
    solve(arr);
}