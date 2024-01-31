#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int n = matrix.size();

    for(int i = 0; i<n; i++){
        for(int j=0; j<=i; j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
            // swap(matrix[i][j], matrix[j][i]);
        
        }
    }

    // reverses the modified matrix 
    for(int i = 0; i <n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }

    // now lets checking it for rotating 90 degrees
    for(int i = 0; i < n; i++) {
        for(int j =0; j < n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}