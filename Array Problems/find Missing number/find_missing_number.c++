#include<bits/stdc++.h>

using namespace std;

int main() {
    // vector<int> arr = {9,6,4,2,3,5,7,0,1};
    vector<int> arr = {0,1};
    // vector<int> arr = {3, 0, 1};
    int n = arr.size();
    int missing_num = -1;
    int sum_of_nums = 0;
    int sum_of_n = 0;

    for(int i = 0; i <= n; i++) {
        sum_of_n += i;
        if(i == n) continue;;
        sum_of_nums += arr[i];
 
    }
   missing_num = sum_of_n - sum_of_nums;
   cout<<missing_num;
}