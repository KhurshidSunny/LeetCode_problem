#include<bits/stdc++.h>

using namespace std;

int main() {
    // string s = "A man, a plan, a canal: Panama";
    string s = "ab_a";

     string s2 = "";
    string copy = s;

    
    //  if(s == ""){
    //         cout<<"it is a palindrom"<<endl;
    //         break;
    //     }
    // emtpy the original string s
    s.clear();

    for(int i = 0; i < copy.size(); i++) {
       
        if((copy[i] >= 65 && copy[i] <= 90) || (copy[i] >= 97 && copy[i] <= 122) || (copy[i] >= 48 && copy[i] <= 57)) {
            if(copy[i] >= 65 && copy[i] <= 122) {
                char letter = tolower(copy[i]);
                
                s2.append(1, letter);
                // also append in s(original string)
                s.append(1, letter);
            }
            else {
                // append in s2
                s2.append(1, copy[i]);
                // also append in s(original string)
                s.append(1, copy[i]);
            }
        }
    }

    // now reverse the s2(copy string)
    reverse(s2.begin(), s2.end());


    if(s == s2) cout<<"Yes, it is a vlid palindrom"<<endl;
    else cout<<"No, it is not a vlid palindrom"<<endl;






    // if(s == s2) {
    //     cout<<"yes it is a palindrom"<<endl;
    // }
    // else cout<<"NO, it is not palindrom";


    
}