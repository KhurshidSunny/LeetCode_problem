#include<bits/stdc++.h>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 2,1, 1, 3};
    // vector<int> arr = {1, 2};
    // vector<int> arr = {-3,0,1,-3,1,1,1,-3,10,0};
    // vector<int> arr = {26,2,16,16,5,5,26,2,5,20,20,5,2,20,2,2,20,2,16,20,16,17,16,2,16,20,26,16};

    // sort the array
    sort(arr.begin(), arr.end());

    vector<int> keep_count;
    bool flag = 1;

    for(int i = 0; i < arr.size(); i++) {
    
        if(i > 0 && arr[i] == arr[i-1]) continue;
        int count = 0;
        for (int j = 0; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        // checking if there is any same numeber of occurances
        for(auto occur : keep_count){
            if(count == occur) {
                flag = 0;
                break;
            }
        }
        keep_count.push_back(count);
    }
    if(flag == 1) {
        cout<<"True"<<endl;
    }
    else  {
        cout<<"False"<<endl;
    }
}