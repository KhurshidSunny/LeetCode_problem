#include<bits/stdc++.h>

using namespace std;

class DynamicArray {
    int *arr;
    int siz, cap;

    public:
    DynamicArray(){
        arr = NULL;
        siz = 0, cap = 0;
    } 

    void push_back(int num) {
        if(siz < cap) {
            arr[siz] = num;
            siz++;
            // cap++;
        }
        else {
            int *brr;
            if(cap > 0) {
                brr = new int[2 * cap];
                cap *= 2;
                
            }
            else {
                brr = new int[1];
                cap = 1;
                
            }

            // copy all all ments from a to b now the new array
            for(int i = 0; i < siz; i++) {
                brr[i] = arr[i];
            }

            // now delete the arr coz we copied all elements into b 
            delete[] arr;

            arr = brr;
            arr[siz] = num;
            siz++;
        }

    }

    void pop_back() {
        if(siz > 0) {
            siz--;
            // cap--;
        }
    }

    int get_size() {
        return siz;
    }
    
    int get_cap() {
        return cap;
    }

    void printArr() {
        for(int i = 0; i < siz; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    
    }
};



int main() {

    DynamicArray vec1 = DynamicArray();

    for(int i = 0; i < 20; i++){
        cout<<vec1.get_size()<<"  "<<vec1.get_cap()<<endl;
        vec1.push_back(i);
    }
    // vec1.push_back(10);
    // vec1.push_back(20);
    // vec1.push_back(30);
    // // vec1.pop_back();
    // vec1.printArr();
    //  vec1.push_back(60);
    //  vec1.push_back(70);
    //  vec1.push_back(80);
    //  vec1.push_back(90);
    //  vec1.push_back(100);
    //  vec1.push_back(110);
    //  vec1.printArr();
    // cout<<vec1.get_size()<<endl;
    // cout<<vec1.get_cap()<<endl;
    // cout<< vec1;

}