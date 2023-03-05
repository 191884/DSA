#include<bits/stdc++.h>
using namespace std;
int solve(vector<vector<int>> &vect){
    int m = vect.size();
    int n = vect[0].size();
    int row = m/2;
    int col = n/2;
    return vect[row][col];
}
int main(){
    vector<vector<int>> vect = {{2,3,5}, {4,5,7},{6,7,9}};
    cout<<"Median is "<<solve(vect);
}