#include <iostream>
using namespace std;

void f(int n){
    if(n==0){
        return;
    }
    f(n-1);
    cout<<n;
}

int main(){
    int n=5;
    //cin>>n;
    f(n);
    return 0; 
}