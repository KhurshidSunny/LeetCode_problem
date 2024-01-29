#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int m = mat.size();
    int n = mat[0].size();

    int sum = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if((i == j) || (i+j == m-1)) {
                sum += mat[i][j];
            }
        }
    }

    cout<<"the sum of diagonal is : "<<sum<<endl;
}