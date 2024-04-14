#include <bits/stdc++.h>
using namespace std;
int main(){
    // time complexity -> 0(1) it is faster than a%2==0
    int a; cin>>a;
    if(a&1==0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }

    return 0;
}

