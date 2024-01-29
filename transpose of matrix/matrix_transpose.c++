#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
        // {1, 2, 3},
        // {4, 5, 6}
    };

    int n = mat.size();
    int m = mat[0].size();

    vector<vector <int>> list;

    for(int j = 0; j < m; j++) {
        vector<int> newRow;
        for(int i = 0; i < n; i++) {
            newRow.push_back(mat[i][j]);
            
        }
        
        list.push_back(newRow);
    }

    

    for(int i = 0; i < list.size(); i++) {
        for(int j = 0; j < list[0].size(); j++) {
            cout<<list[i][j]<<" ";
        }
        cout<<endl;
        
    }


 
}