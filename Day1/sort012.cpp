#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {2,0,2,1,1};
    int n = 5;
    int left = 0, right = n-1;
    int mid = 0;
    while (mid <= right)
    {
        switch (arr[mid])
        {
        case 0:
            swap(arr[mid++], arr[left++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(arr[mid++], arr[right--]);
            break;
        }
    }
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}