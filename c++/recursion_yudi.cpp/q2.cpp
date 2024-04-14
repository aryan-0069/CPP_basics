#include <bits/stdc++.h>
using namespace std;
//print 5 4 3 2 1 2 3 4 5
void inc(int n,int curr){
    if(n + 1 == curr){
        return;
    }
    cout << curr << " ";
    inc(n,curr+1);
}

void dec(int n){
    if(n==0){
        return;
    }
    cout << n << " ";
    dec(n-1);
}

int main(){
    int n; cin>>n;
    dec(n);
    inc(n,2);
    return 0;
}