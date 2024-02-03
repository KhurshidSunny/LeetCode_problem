#include<bits/stdc++.h>

using namespace std;

int main() {
    string jewels = "aA";
    string stones = "aAAbbb";
    int max_count = 0;
    for(int i = 0; i < jewels.length(); i++) {
        char jw = jewels[i];
        for(int j = 0; j < stones.length(); j++) {
            if(jw == stones[j]) {
                max_count++;
            }
        }
     
    }
    cout<<max_count<<endl;
}