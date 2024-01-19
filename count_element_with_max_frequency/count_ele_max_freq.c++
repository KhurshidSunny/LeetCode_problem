#include<bits/stdc++.h>

using namespace std;


int main() {
    int arr [] = {1, 2, 2, 3, 1, 4};
    // int arr [] = {1, 2, 3, 4, 5};
    // int arr [] = {2, 5, 3, 9, 3, 11, 2, 15, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    int max_freq = 0;
    int element_count = 0;

    for(int i = 0; i < n; i++){
          int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]){
                count++;
            }
        }
        // checing the condition for max fequency
        if(count > max_freq) {
            max_freq = count;
            // reset the element count first and then increament
            element_count = 0;
            element_count++;
        }
        else if(count == max_freq) {
            max_freq = count;
            element_count++;
        }
    }

    cout<<"The total element with max fequency is : "<<element_count<<endl;
}