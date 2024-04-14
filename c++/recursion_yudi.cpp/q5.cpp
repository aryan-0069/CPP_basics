#include <bits/stdc++.h>
using namespace std;
//print square of all

void square(int curr,int n){
    if(curr == n+1){
        return;
    }
    cout << curr*curr << " ";
    square(curr+1,n);
}

int main(){
    int n; cin >> n;
    square(1,n);
    return 0;
}