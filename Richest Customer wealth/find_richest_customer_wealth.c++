#include<bits/stdc++.h>

using namespace std;

// working with 2D array

int main() {
    int accounts [3][3] = {
        {2,8,7},
        {7,1,3},
        {1,9,5}

       
    };

    int row_size = sizeof(accounts)/sizeof(accounts[0]);
    int col_size = sizeof(accounts[0])/sizeof(int);
    int cust_wealth = 0;
    
    for(int i = 0; i < row_size; i++) {
        int count = 0;
        for(int j = 0; j < col_size; j++) {
            count += accounts[i][j];
        }
        if(count >= cust_wealth) {
            cust_wealth = count;
        }
    }
    cout<<"The richest customer is : "<<cust_wealth<<endl;
}