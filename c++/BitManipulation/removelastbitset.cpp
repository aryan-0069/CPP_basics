//basically make the last bit set to unset(0) eg-> n=13 -> 1101 make it 1100 ,, n=9->1001 make it 1000
#include <bits/stdc++.h>
using namespace std;
int main(){
    //brian kernighan's algorithm
    int a=12; //12 -> 1100 in binary so make it 1000  removing the last bit-set
    int mask = a & a-1;
    cout<<mask;
    return 0;
}