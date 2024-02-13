#include<bits/stdc++.h>

using namespace std;

int main() {
 
 vector<int> nums = {3,1,2,10,1};
 int n = nums.size();

 vector<int> ans(n);

 for(int i = 0; i < n; i++) {
    
    ans[i] = i>0 ? ans[i-1]+nums[i] : nums[i];
 }

 for(int num : ans) {
    cout<<num<<" ";
 } 
}