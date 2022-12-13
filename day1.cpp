#include<iostream>
using namespace std;

//   Check if the 𝑖
//   𝑡ℎ bit of a number is 
//   set (ie. equal to one) 
//   or not (ie. equal to zero) 

void setOrNot(int n, int k){
    if((n>>k) & 1)
        cout<<"Set";
    else
        cout<<"Not set";
}

int main(){
    int n=5, k=1;

    // cout<<"Enter the number you want to check for set:"<<endl;
    // cin>>n;

    // cout<<"Enter the bit number you want to check:"<<endl;
    // cin>>k;

    setOrNot(n, k);
    return 0;
}