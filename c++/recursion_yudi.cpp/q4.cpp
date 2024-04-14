#include <bits/stdc++.h>
using namespace std;
//print all odd numbers [1,N]                     
void printODD(int curr , int n){
    if(curr == n+1){
        return;
    }
    if((curr & 1) == 1) cout << curr << " ";
    printODD(curr+1,n);
}

int main(){
    int n; cin >> n;
    printODD(1,n);
    return 0;
}