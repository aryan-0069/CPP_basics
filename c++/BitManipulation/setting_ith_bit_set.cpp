#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=9;
    int i=2;
    //1001
    //i=2 (i.e second index of binary form to set)
    //ans will 1101 in binary or 13 in decimal
    int mask = 1<<i;
    int x = mask | a;
    cout<<x;
    return 0;
}