#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> a{ { 1, 2, 3, 4 },
                            { 5, 6, 7, 8 },
                            { 9, 10, 11, 12 },
                            { 13, 14, 15, 16 } };
    int n = a.size();
    int m = a[0].size();
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
    vector<int> ans;
    int div =0;
    while (top <= bottom && left <= right)
    {
        if(div == 0){
            for(int i =left; i<= right; ++i){
                ans.push_back(a[top][i]);
            }
            top = top + 1;
        }else if(div == 1){
            for(int i = top; i<= bottom; ++i){
                ans.push_back(a[i][right]);
            }
            right = right - 1;
        }else if(div == 2){
            for(int i = right; i>=left; --i){
                ans.push_back(a[bottom][i]);
            }
            bottom = bottom - 1;
        }else if(div == 3){
            for(int i = bottom; i>= top; --i){
                ans.push_back(a[i][left]);
            }
            left = left + 1;
        }
        div = (div+1) % 4;
    }
    for(int i = 0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
}