#include <bits/stdc++.h>
using namespace std;

void print_1toN_backtracking(int n,int i){
    if(i>n)
        return;
    print_1toN_backtracking(n,i+1);
    cout<<i<<" ";
    
}

signed main(){
    int n; cin>>n;
    print_1toN_backtracking(n,1);
    return 0;
}