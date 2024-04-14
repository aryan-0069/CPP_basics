#include <bits/stdc++.h>
using namespace std;
//recursive                     
void printNAME(int curr,int n){
    if(n==curr-1){
        return ;
    }
    cout << curr << endl;
    printNAME(curr+1,n);
}

//backtracking approach
void printNUM(int n){
    if( n == 0){
        return;
    }
    printNUM(n-1);
    cout << n << " ";
}

int main(){
    int n ; cin >> n;
    printNUM(n);
    return 0;
}