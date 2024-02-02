#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cout<<"Enter string : ";
    cin>>s;

    /*
        ((s[head] >= 65 && s[head] <= 90) || (s[head] >= 97 && s[head] <= 122)) (s[tail] >= 65 && s[tail] >=90 || s[tail] >= 97 && s[tail] <= 122)
    */

    int n = s.size();
    int head = 0;
    int tail = n-1;

    while(head < tail) {
        if(!isalpha(s[head])){
            head++;
        }
        else if(!isalpha(s[tail])){
            tail--;
        }
        else {
            swap(s[head], s[tail]);
            head++;
            tail--;
        }
    }

    for(auto &n: s){
        cout<<n;
    }

}