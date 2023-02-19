#include<bits/stdc++.h>
using namespace std;

void merge(int nums[], int left, int mid, int right){

    int const len1 = mid - left + 1;
    int const len2 = right - mid;

    int *first = new int[len1];
    int *sec = new int[len2];

    int k = left;
    for(int i= 0; i < len1; i++){
        first[i] = nums[k+i];
    }
    k = mid+1;
    for(int j = 0; j < len2; j++){
        sec[j] = nums[k+j];
    }

    int index1 = 0;
    int index2 = 0;
    k = left;

    while(index1 < len1 && index2 < len2){
        if(first[index1] <= sec[index2]){
            nums[k++] = first[index1++];
        }else{
            nums[k++] = sec[index2++];
        }
    }

    while(index1< len1){
        nums[k++] = first[index1++];
    }
    while(index2 < len2){
        nums[k++] = sec[index2++];
    }

    delete []first;
    delete []sec;

}
void mergeSort(int nums[], int left, int right){
    if( left >= right) 
        return;
    int mid = left + (right - left)/2;

    mergeSort(nums, left, mid);
    mergeSort(nums, mid+1, right);

    merge(nums, left, mid, right);
}

int main(){
    int nums[] = { 12, 11, 13, 5, 6, 7 };
    int n = sizeof(nums)/sizeof(nums[0]);
    mergeSort(nums, 0, n-1);
    for(int i = 0; i < n; i++){
        cout<<nums[i]<<" ";
    }
}