#include<bits/stdc++.h>

using namespace std;

int main() {
    int num1, num2;
    cout<<"Enter num1 and num2"<<endl;
    cin>>num1>>num2;
   
  
  /////////// Solution one (i tried)//////////////
   /*
          
    for(int i = min(num1, num2); i >= 1; i--) {
        if(num1 % i == 0 && num2 % i == 0) {
            cout<<"GCD is : "<<i<<endl;
            break; 
        }
    }
     */ 



    ///////////////// Solution 2 (watched) ///////////////////
    while(num1 != num2) {
        if(num1 > num2) {
            num1 -= num2;
        }
        else {
            num2 -= num1;
        }
    }
    cout<<"GCD of two numbers is : "<<num1<<endl;
}