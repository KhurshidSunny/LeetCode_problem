#include<iostream>

using namespace std;

/*
    problem statement:
        Given an integer num, repeatedly add all its digits until the result has only one digit and return it
        e.g: 38 the process is:
             3 + 8 => 11
             1 + 1 => 2 (now 2 is only one digit so return it)

*/

int addDigits(int num){

    int sum = 0;
    int digit = 0;
    // check if the number is not zero
    if(num > 0) {
        while(num > 0) {
            digit = num % 10;
            sum += digit;


            num = num / 10;
         
            
            if(num <= 0 && (sum%10) != sum) {
                num = sum;
                sum = 0;
            }
         
            
        }
        // cout<<sum%10<<endl;
        // cout<<"sum check after loop : "<<((sum%10) == sum)<<" sum value is "<<sum<<endl;
        // cout<<"number after loop: "<<num<<endl;
        return sum;
     
    }


};

int main() {

    cout<<"function answr: "<<addDigits(38)<<endl;
    cout<<"function answr: "<<addDigits(89)<<endl;
    cout<<"function answr: "<<addDigits(9866)<<endl;
    cout<<"function answr: "<<addDigits(8)<<endl;
    cout<<"function answr: "<<addDigits(2)<<endl;
    cout<<"function answr: "<<addDigits(1)<<endl;
    // cout<<"function answr: "<<addDigits(0)<<endl;

    return 0;
}