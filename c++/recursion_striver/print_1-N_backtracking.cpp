#include <bits/stdc++.h>
using namespace std;

void print_1toN_backtracking(int n,int i){
    if(i<1)
        return;
    print_1toN_backtracking(n,i-1);
    cout<<i<<" ";
    
}

signed main(){
    int n; cin>>n;
    print_1toN_backtracking(n,n);
    return 0;
}