#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> nums = {1, 1, 0, 1, 1 ,1};
    int n = nums.size();

    /*
    

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
               count++;
            for(int k = j; k < n; k++){
                cout<<nums[k];
            }
            cout<<endl;
        }
    }
    cout<<count<<endl;

        */


    // solve it with formul
    
    int num_of_sub_arr = (n*(n+1))/ 2;
    cout<<n<<endl;
    cout<<num_of_sub_arr;

    return 1;
}