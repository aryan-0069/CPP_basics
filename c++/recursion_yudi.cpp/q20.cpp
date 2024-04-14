#include <bits/stdc++.h>
using namespace std;

// print the sequence -> 0 1 1 0 1 1 2 1 3 2 5 2


//approach 1
int ans1(int n){
    if(n==0 || n==1){
        return n;
    }
    return (n&1 == 1 ? ans1(n-1)+ans1(n-2) : ans1(n-1)-ans1(n-2));
}


//approach 2
int ans2(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    if(n == 2){
        return 1;
    }
    if(n == 3){
        return 0;
    }
    return (n&1 == 1 ? ans2(n-2)+ans2(n-4) : ans2(n-1)+ans2(n-2));
}
int main(){
    int n = 12;
    cout << ans1(n) << endl;
    return 0;
}