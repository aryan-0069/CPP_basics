#include <bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY -> 2^n

int fibo(int n) {
    if(n <= 1){
        return n;
    }
    int last = fibo(n-1);
    int second_last = fibo(n-2);
    return last + second_last;
}


int main(){
    cout << fibo(4) << endl;
    return 0;
}