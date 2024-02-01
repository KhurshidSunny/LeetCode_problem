#include<bits/stdc++.h>

using namespace std;

bool isPalindrom(int x) {
    int temp = x;
    if(temp < 0) return false;

    long int rev = 0;
    while(temp) {
        int digit = temp%10;
        rev = rev*10 + digit;

        temp /= 10;
    }
    if(x == rev) return true;
    else return false;
}

int main() {
    int num;
    cout<<"Enter the number ";
    cin>>num;
    bool ans = isPalindrom(num);
    if(ans) cout<<"it is a palindrome";
    else cout<<"not palindrom";
   
    /*
     int temp = num;
    string numToString = to_string(temp);
    reverse(numToString.begin(), numToString.end());
    int reverseNum = stoi(numToString);
    if(num == reverseNum){
        cout<<"it is a palindrom number "<<endl;
    }
    else {
        cout<<"it is not a palindrom number "<<endl;
    }

    */

   
  
    
}