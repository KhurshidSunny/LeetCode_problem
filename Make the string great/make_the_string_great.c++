#include<bits/stdc++.h>

using namespace std;

int main() {
    string s, s2;
    cout<<"Enter the string : ";
    cin>>s;
    int n = s.length();
    if(s == ""){
        cout<<"The String is great";
    }

    //    if(s == "" || n == 1){
    //         cout<<"The String is great";
    //         break;
    //     }
    // leEeetcode
    bool flag = true;
    while(flag) {
        int n = s.length();
        int j=0;
        flag = false;
        for(int i = 0; i < n; i++) {
            //  101-32=69 != 69
            
            if(i+1 < n && (s[i]-32 == s[i+1] || s[i]+32 == s[i+1]) ) {
                i++;
                flag=true;
            }
            
            else {
                s[j] = s[i];
                j++;
            }
            
            } 
            s = s.substr(0, j);
    }

  cout<<s;
}