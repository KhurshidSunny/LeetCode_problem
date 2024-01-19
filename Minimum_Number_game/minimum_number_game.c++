#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums = {5,4,2,3};

    // sorted it ascending orrder
    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i+=2) {
        swap(nums[i], nums[i+1]);
    }

    for(int n : nums){
        cout<<n<<" ";
    }
}