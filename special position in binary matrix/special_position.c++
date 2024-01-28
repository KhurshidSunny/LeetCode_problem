#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr [3][3] = {
        {1, 0, 0},
        {0, 0, 1},
        {1, 0, 0}
        // {1, 0, 0},
        // {0, 1 ,0},
        // {0, 0, 1}
    };

    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr[0])/sizeof(int);
    int special = 0;

    int row[m];
    int col[n];

    // initlize the col and row with 0
    for(int i = 0; i < m; i++){
        row[i] = 0;
    }
    for(int j = 0; j < n; j++) {
        col[j] = 0;
    }



    // count the number of 1 in each row and col and put in row or col array
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 1){
                row[i]++;
                col[j]++;
            }
        }
    }


    // count the number of special position where is only 1 in both row and col
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 1 && row[i] == 1 && col[j] == 1){
                special++;
            }
        }
    }

    cout<<"number of special position : "<<special<<endl;

}