#include<bits/stdc++.h>

using namespace std;

int main() {
    int arr[] = {99};
    // int arr[] = {4,3,2,1};

    int size = sizeof(arr)/sizeof(int);

    int sum = 0;
    for(int i = 0; i < size; i++) {
        int number = round(pow(10, size-i-1));
        sum += arr[i] * number;
    }

    sum++;
    int new_arr[] = {};
    int i = 0;

    while(sum > 0) {
        new_arr[i] = sum%10;
        
        sum /= 10;
        i++;
    }

    reverse(new_arr, new_arr+size);
    for(auto num : new_arr) {
        cout<<num<<" ";
        
    }





}