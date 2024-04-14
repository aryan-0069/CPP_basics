#include <bits/stdc++.h>
using namespace std;

void print_1_to_N(int n,int i){
    if(n<i)
        return;
    cout<<i<<" ";
    print_1_to_N(n,i+1);
}

signed main(){
    int n; cin>>n;
    print_1_to_N(n,1);
    return 0;
}