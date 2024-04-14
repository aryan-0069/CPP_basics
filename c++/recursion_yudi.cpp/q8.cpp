#include <bits/stdc++.h>
using namespace std;
//print the cuberoot of all numbers
void cubeROOT(int curr,int n){
    if(n+1 == curr){
        return;
    }
    double c_root = cbrt(curr);
    cout << c_root << " ";
    cubeROOT(curr+1,n);
} 

int main(){
    int n; cin >> n;
    cubeROOT(1,n);
    return 0;
}