#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {17, 18, 5, 4, 6, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    

    for(int i = 0; i < size-1; i++){
        int max = arr[i+1];
        for(int j = i+1; j < size; j++) {
            if(arr[j] >= max) {
                max = arr[j];
            }
        }
        arr[i] = max;
    }

    arr[size-1] = -1;


    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
}