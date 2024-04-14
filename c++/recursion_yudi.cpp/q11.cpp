#include <bits/stdc++.h>
using namespace std;

//print N->1 & N->1
//5 4 3 2 1 2 3 4 5    

//variation 1
void dec1(int n){
    if(n == 1){
        return;
    }
    cout << n << " ";
    dec1(n-1);
}

void inc1(int n){
    if(n == 0){
        return;
    }
    inc1(n-1);
    cout << n << " ";
}

//variation 2
void dec2(int n){
    if(n == 0){
        return;
    }
    cout << n << " ";
    dec2(n-1);
}

void inc2(int n){
    if(n == 1){
        return;
    }
    inc2(n-1);
    cout << n << " ";
}

int main(){
    int n; cin >> n;
    dec1(n);
    inc1(n);
    cout << endl;
    dec2(n);
    inc2(n);
    cout << endl;
    return 0;
}