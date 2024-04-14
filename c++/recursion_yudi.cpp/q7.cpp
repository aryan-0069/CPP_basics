#include <bits/stdc++.h>
using namespace std;
//print the sqaureroot of all numbers

void squareROOT(int curr,int n){
    if(n+1 == curr){
        return;
    }
    double root = sqrt(curr);
    cout << root << " ";
    squareROOT(curr+1,n);
} 

int main(){
    int n; cin >> n;
    squareROOT(1,n);
    return 0;
}