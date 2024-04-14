// Print name N times using recursion.

#include <bits/stdc++.h>
using namespace std;

void call_name_ntimes(int n){
    if(n==0) return;
    cout<<"Aryan\n";
    n--;
    call_name_ntimes(n);
}

signed main(){
    int n = 5;
    call_name_ntimes(n);
    return 0;
}   