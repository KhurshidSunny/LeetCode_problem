#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {9, 5, 1, 2}
    };

    int m = matrix.size();
    int n = matrix[0].size();
    bool flag = true;
    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(matrix[i][j] != matrix[i-1][j-1]) {
                flag = false;
                break;
            }
        }
    }
    if(flag == true) cout<<" yes Toeplitz matrix"<<endl;
    else cout<<"not ToePlitz matrix"<<endl;
}