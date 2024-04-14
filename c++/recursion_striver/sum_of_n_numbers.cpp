#include <bits/stdc++.h>
using namespace std;

//parametrized recursion
void sum1(int n,int ans){
    if(n==0){
        cout << ans+n << endl;
        return;
    }
    sum1(n-1,ans+n);
}

//functional recursion
int sum2(int n){
    if(n == 0){
        return 0;
    }
    return n + sum2(n-1); 
}
         
int main(){
    int n; cin >> n;
    sum1(n,0);
    cout << sum2(n) << "\n";
    return 0;
}