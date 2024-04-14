// Q) PRINT FACTORIAL OF N 

#include <bits/stdc++.h>
using namespace std;

//parametrized
void fact1(int n, int fact){
    if(n == 1){
        cout << fact << endl;
        return;
    }
    fact *= n;
    fact1(n-1,fact);
}


//functional
int fact2(int n){
    if(n == 1){
        return n;
    }
    return n * fact2(n-1);
}


int main(){
    int ans = 1;
    int n = 5;
    for(int i=n;i>=1;i--){
        ans *= i;
    }
    cout << ans << endl;
    fact1(5,1);
    cout << fact2(5) << endl;
    return 0;
}