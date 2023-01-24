pair<long long, long long> getMinMax(long long a[], int n) {
    int low = INT_MAX, high= INT_MIN;
    for(int i = 0; i< n; i++){
        if(a[i] < low){
            low = low < a[i]?low: a[i];
        }
        if(a[i] > high){
            high = high > a[i]? high: a[i];
        }
    }
    pair<int, int> ans;
    ans.first = low;
    ans.second = high;
    return ans;
}