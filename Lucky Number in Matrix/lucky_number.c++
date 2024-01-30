#include<bits/stdc++.h>

using namespace std;


int main() {
    vector<vector<int>> matrix = {
        // {3,7,8},
        // {9, 11, 13},
        // {15, 16, 17}

        {1,10,4,2},
        {9, 3, 8, 7},
        {15, 16, 17, 12}
    };

    vector<int> lucky_numbers;
    int m = matrix.size();
    int n = matrix[0].size();
    int small, big;
  
   
    for(int i = 0; i < m; i++) {
        int k = 0;
        small = 9999999;
        
        for(int j = 0; j < n; j++) {
            if(small > matrix[i][j]) {
                small = matrix[i][j];
                k = j;
            }
        }

        big = small;
        for(int j = 0; j < m; j++) {
            big = max(big, matrix[j][k]);
        }

        // now checking if both are equal
        if(small == big) {
            lucky_numbers.push_back(small);
        }
  
    }

    for(auto n : lucky_numbers){
        cout<<n<<endl;
    }



}