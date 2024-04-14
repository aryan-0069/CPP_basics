#include <bits/stdc++.h>
using namespace std;
                      
void printNAME(int n){
    if(n==0){
        return ;
    }
    cout << n << endl;
    printNAME(n-1);
}

int main(){
    int n ; cin >> n;
    printNAME(n);
    return 0;
}