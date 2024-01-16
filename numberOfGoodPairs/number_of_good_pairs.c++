#include<bits/stdc++.h>

using namespace std;

int main() {
    int nums [] = {1,2,3,1,1,3};
    int good_pairs = 0;
    int size = sizeof(nums) / sizeof(nums[0]);

    for(int i = 0; i < size; i++) {
        for(int j = i; j < size; j++) {
            if(nums[i] == nums[j] && i < j ){
                good_pairs++;
            }
        }
    }

    cout<<"There are "<<good_pairs<<" good pairs in the given array"<<endl;
}