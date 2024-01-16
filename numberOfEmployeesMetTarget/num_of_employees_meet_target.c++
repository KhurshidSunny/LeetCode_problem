#include<bits/stdc++.h>

using namespace std;

int main() {
    int hours[] = {0,1,2,3,4};
    int target = 2;
    int count = 0;
    int size = sizeof(hours) / sizeof(hours[0]);

    for(int i = 0; i < size; i++) {
        if(hours[i] >= target) {
            count++;
        }
    }
    cout<<count<<" employees meet the target hours to work"<<endl;
}