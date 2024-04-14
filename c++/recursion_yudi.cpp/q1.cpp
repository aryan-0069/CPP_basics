#include <bits/stdc++.h>
using namespace std;
//print 1 2 3 4 5 4 3 2 1
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
    inc(n,1);
    dec(n-1);
    return 0;
}