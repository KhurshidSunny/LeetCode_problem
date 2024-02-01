#include<bits/stdc++.h>

using namespace std;

    bool isPalindrom(string &s, int i, int j) {
        while(i < j) {
            if(s[i] == s[j]) {
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }


    bool validPalindrome(string s) {
        string copy = s;
        int n = s.size();
        int head = 0;
        int tail = n-1;

        while(head < tail) {

            if(copy[head] != copy[tail]) {
                if(isPalindrom(copy, head, tail-1) || isPalindrom(copy, head+1, tail)){
                    return true;
                }
                else return false;
            }
            else{
                head++;
                tail--;
            }
        }
        return true;
    }


int main() {

    string s = "deeee";
    bool ans = validPalindrome(s);
    if(ans) cout<<"True";
    else cout<<"false";

}