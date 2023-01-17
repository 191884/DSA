#include<bits/stdc++.h>
using namespace std;

void pri(vector<vector<int>> vect){
    for(int i = 0; i < vect.size(); i++){
        for(int j = 0; j < vect[i].size(); j++){
            cout<< vect[i][j]<<" ";
        }
        cout<<endl;
    }
}

void solve(vector<vector<int>> & vect, int n){
    for(int i = 0; i < n; i++){
        vect[i].resize(i+1);
        vect[i][0] = vect[i][i] =1;
        
        for(int j = 1; j < i; j++){
            vect[i][j] = vect[i-1][j-1] + vect[ i-1][j];
        }
    }
    
}

int main(){
    int n = 6;
    vector< vector<int>> vect(n);
    solve(vect, n);
    pri(vect);
}