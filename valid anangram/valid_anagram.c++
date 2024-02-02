#include<bits/stdc++.h>
using namespace std;

bool valid_anagram(string s, string t) {
    vector<int> alphabetFreq(26);
    // increment the vlaue of the  index of 
    // that particular letter from string s
    for(int i = 0; i<s.size(); i++) {
        int letterIndex = s[i] - 'a';
         alphabetFreq[letterIndex]++;
    }
    // decrement the vlaue of the  index of 
    // that particular letter from string t
    for(int j = 0; j<t.size(); j++) {
        int letterIndex =  t[j] - 'a'; 
        alphabetFreq[letterIndex]--;
    }

    for(auto n : alphabetFreq) {
        if(n != 0) return false;
    }

    return true;
}

int main() {
    string t, s;
    cout<<"Enter string s : ";
    cin>>s;
    cout<<"Enter string t : ";
    cin>>t;
    
    bool ans = valid_anagram(s, t);
    if(ans) cout<<"True"<<endl;
    else cout<<"False";
    
    
    



}