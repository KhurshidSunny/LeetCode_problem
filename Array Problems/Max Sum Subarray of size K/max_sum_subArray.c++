#include<bits/stdc++.h>

using namespace std;

long maximumSumArray(int k, vector<int> &arr, int n) {
    long cur_sum = 0;

    // first find first leftmost subarry sum
    for(int i = 0; i < k; i++) {
        cur_sum += arr[i];
    }

    long final_ans = cur_sum;

    for(int st=1, end=k; end<n; st++,end++) {
        cur_sum = (cur_sum - arr[st-1])+arr[end];

        final_ans = max(final_ans, cur_sum);

    }
    return final_ans;
}

int main() {
    vector<int> arr = {10, 1, 5, 3, 2, 2, 8, 9, 3, 5};
    int k = 4;

    long ans = maximumSumArray(k, arr, arr.size());
    cout<<ans;

    
}