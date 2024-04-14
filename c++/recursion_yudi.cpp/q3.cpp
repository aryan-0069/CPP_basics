#include <bits/stdc++.h>
using namespace std;
//print all even numbers [1,N]
void printEVEN(int curr , int n){
    if(curr == n+1){
        return;
    }
    if((curr & 1) == 0) cout << curr << " ";
    printEVEN(curr+1,n);
}

int main(){
    int n; cin >> n;
    printEVEN(1,n);
    return 0;
}