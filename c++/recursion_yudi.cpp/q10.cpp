#include <bits/stdc++.h>
using namespace std;

//print 1->N & N->1
//1 2 3 4 5 4 3 2 1    


void dec(int curr,int n){
    if(curr == n){
        return;
    }
    dec(curr+1,n);
    cout << curr << " ";
}

void inc(int curr,int n){
    if(curr-1 == n){
        return;
    }
    inc(curr,n-1);
    cout << n << " ";
}



int main(){
    int n; cin >> n;
    inc(1,n);
    dec(1,n);
    return 0;
}