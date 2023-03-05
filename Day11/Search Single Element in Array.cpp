#include<bits/stdc++.h>

using namespace std;

int findSingleElement(vector < int > & nums) 
{
    int low = 0;
    int high = nums.size()-1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (mid % 2 == 0) {
            if (nums[mid] != nums[mid + 1]) 
                high = mid - 1;
            else
                low = mid + 1;
        } else {
            if (nums[mid] == nums[mid + 1]) 
                high = mid - 1;
            else
                low = mid + 1;
        }
    }

    return nums[low];
}

int main() {
    vector < int > v {1,1,2,3,3,4,4,8,8};

    int elem = findSingleElement(v);
    cout << "The single occurring element is " << elem << endl;

}