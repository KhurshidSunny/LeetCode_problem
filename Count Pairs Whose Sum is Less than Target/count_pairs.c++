#include<bits/stdc++.h>

using namespace std;

int main() {
    // int nums [] = {-1,1,2,3,1};
    int nums [] = {-6,2,5,-2,-7,-1,3};
    int target = -2;

    int count = 0;
    int size = sizeof(nums)/sizeof(int);

    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
             if(i < j && nums[i]+nums[j] < target){
                count++;
            }
        }
       
    }

    cout<<"There are "<<count<<" pairs in the given array "<<endl;
}