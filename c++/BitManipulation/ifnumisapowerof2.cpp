#include <bits/stdc++.h>
using namespace std;
int main(){
    //tc -> 0(1) 
    int x; cin >> x;
    if((x & x-1) == 0) cout<<"power of two";
    else{
        cout<<"not power of 2";
    } 
    return 0;
}