#include<bits/stdc++.h>

using namespace std;

int main() {
    string s = "l|*e*et|c**o|*de|";
    int ans = 0;
    bool flag = false;

    for(auto ch : s) {
        if(ch == '*' && !flag) ans++;
        else if(ch == '|') flag = !flag;
    }

    cout<<"the number of asterisks : "<<ans<<endl;
}