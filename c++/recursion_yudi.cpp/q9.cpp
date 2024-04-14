#include <bits/stdc++.h>
using namespace std;

void mul_3_not_5(int curr,int n){
    if(n+1 == curr){
        return;
    }
    if(curr%3 == 0 && curr%5 != 0) cout << curr << " ";
    mul_3_not_5(curr+1,n);
}

int main(){
    int n; cin >> n;
    mul_3_not_5(1,n);
    return 0;
}