#include<bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(int n) {

        if(n >= 1){
            while(n > 1) {
            if(n % 2 == 1) {
                return 0;
            }
            if(n % 2 == 0) {
                n /= 2;
            }
        }
        return 1;
        }
}

int main() {
    cout<<isPowerOfTwo(16)<<endl;;
    // int num; 
    // cout<<"Enter number : ";
    // cin>>num;


    // if(num >= 1) {
    //      while(num > 1) {

    //     if(num % 2 == 1) {
    //         cout<<"Not power two"<<endl;
    //         break;
    //     }
    //     if(num % 2 == 0 ){
    //         num /= 2;
    //     }  
    // }
    // }
   

    // if(num == 1) {
    // cout<<"Power of two"<<endl;
    }
}