#include <bits/stdc++.h>
using namespace std;

//given a range (L-R) print the xor L^(L+1)^(L+2)....^(R-1)^R

//approach -> xor till of R - xor till l-1 ->0(1) solution

int XORfrom1_n(int &n){
    if(n%4==0){
        return n;
    }
    else if(n%4==1){
        return 1;
    }
    else if(n%4==2){
        return n+1;
    }
    return 0;
}

int main(){
    int L,R; cin>>L>>R;
    int x = XORfrom1_n(R) ;
    L--;
    int y = XORfrom1_n(L);
    cout<<(x^y)<<endl;
    return 0;
}
