#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> ans;

   int top=0, bottom=m-1, left=0, right=n-1;

    while(top <= bottom && left <= right) {

        // for moving left to right
        for(int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // for moving top to bottom
        for(int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // for moving right to left
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }


        // for moving bottom to top
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }



    for(auto n : ans) {
        cout<<n<<" ";
    }


}