// Q) sum of 1 TO N numbers


#include <bits/stdc++.h>
using namespace std;


//parametrized
void n_sums(int n,int sum){
    if(n == 1){
        // cout << sum+n << endl;
        return;
    }
    n_sums(n-1,sum+n);
}        

//functional
int n_sum(int n){
    if(n==1){
        return n;
    }
    return n + n_sum(n-1);
}

int main(){
    int n = 5;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum += i;
    }
    cout << sum << endl;
    n_sums(5,0);
    cout << n_sum(5) << endl;
    return 0;
}