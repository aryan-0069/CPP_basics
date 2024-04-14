// Q)SUM OF ALL EVEN NUMBERS FROM 1 TO N



#include <bits/stdc++.h>
using namespace std;

//parametrized
void evenSum(int n,int sum){
    if(n == 0){
        cout << sum << endl;
        return;
    }
    sum += (n%2 == 0 ? n : 0);
    evenSum(n-1,sum);
}


//functional
int EVENSUM(int n){
    if (n == 0){
        return 0;
    }
    return (n%2==0 ? n : 0) + EVENSUM(n-1);
}

int main(){
    int n = 10;
    evenSum(n,0);
    cout << EVENSUM(n) << endl;
    return 0;
}