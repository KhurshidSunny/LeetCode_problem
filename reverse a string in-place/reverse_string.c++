#include<bits/stdc++.h>

using namespace std;

int main() {
    string str = "";
    int n = str.length();

    int head = 0;
    int tail = n-1;
        while(head <= tail ) {
            char temp = str[head];
            str[head] = str[tail];
            str[tail] = temp;

            head++;
            tail--;
        }

        cout<<str<<endl;

}