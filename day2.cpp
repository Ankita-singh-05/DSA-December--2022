// Set the ith bit of a number.

#include<iostream>
using namespace std;

int setithBit(int n, int k){
    return((1<<k)| n);
}

int main(){
    int n=10, k=2;
    cout<<"ith bit set number: "<<
    setithBit(n, k);
    return 0;
}