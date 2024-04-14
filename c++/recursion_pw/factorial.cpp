#include <iostream>
using namespace std;

int fac(int n){
    if(n==1 || n==0) return 1; // for one line we dont need {}
    return n*fac(n-1);
}

int main(){
    int n=5;
    //cin>>n;
    cout<<fac(n);
    return 0;
}