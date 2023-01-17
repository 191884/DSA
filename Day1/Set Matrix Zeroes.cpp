#include<bits/stdc++.h>
using namespace std;


void pri(vector<vector<int>> & arr){
    int rows = arr.size();int cols = arr[0].size();
    for(int i = 0; i< rows;i++){
        for(int j = 0; j< cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solve(vector<vector<int>> & arr){
    int rows = arr.size();
    int cols = arr[0].size();
    bool zero = 0;
    if(arr[0][0] == 0) zero = 1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if(arr[i][j] == 0){
                arr[i][0] = 0;
                arr[0][j] = 0;
            }
        }        
    }
    for(int i = rows-1; i>=1; i--){
        for(int j = cols-1; j>=1; j--){
            if(arr[0][j] == 0){
                arr[i][j] = 0;
            }
            if(arr[i][0] == 0) {
                arr[i][j] = 0;
            }
        }
    }
    if(zero){
        for(int i = 0; i < rows; i++){
            arr[i][0] = 0;
        }
        for(int i = 0; i < cols; i++){
            arr[0][i] = 0;
        }
    }
    cout<<"Matrix After Processing :\n";
    pri(arr);
}

int main(){
    vector<vector<int>> arr;
    arr = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    cout<<"Array Before Processing:\n";
    pri(arr);
    solve(arr);
}