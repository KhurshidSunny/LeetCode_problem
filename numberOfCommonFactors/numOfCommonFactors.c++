#include<bits/stdc++.h>

using namespace std;

// function for Number of Common Factors
int commonFactors(int a, int b) {
    int ans = 0;
        for( int i = 1; i <= min(a, b); i++) {
            if((a % i == 0) && (b % i == 0)) ans++;
    }
    return ans;
}





int main() {
    cout<<commonFactors(12, 6)<<endl;
    cout<<commonFactors(25, 30)<<endl;
    cout<<commonFactors(24, 48)<<endl;

    return 0;
}