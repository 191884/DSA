#include<bits/stdc++.h>
using namespace std;

void solve (vector<int> arr){
    int n = arr.size();
    int a=0, b=0, f1=0, f2=0;
    for(int i = 0; i<n; i++){
        if(f1 == 0){
            a = arr[i];
            f1 =1;
        }else if(f2 == 0){
            b = arr[i];
            f2 = 1;
        } else if(arr[i] == a){
            f1++;
        } else if(arr[i] == b){
            f2++;
        } else{
            f1--, f2--;
        }
    }

    f1 = f2 =0;
    for(int i = 0; i< n; i++){
        if( arr[i] == a ){
            f1++;
        }else if( arr[i] == b){
            f2++;
        }
    }
    vector<int> ans;
    if(f1 >= n/3){
        ans.push_back(a);
    }
    if(f2 >= n/3){
        ans.push_back(b);
    }

    for(auto num: ans){
        cout<< num<<" ";
    }
}

int main(){
    vector<int> arr;
    arr ={11,33,33,11,33,11};
    solve(arr);

}