//basically updating a ith bit to 0 or clearing ith bit
#include <bits/stdc++.h>
using namespace std;
int main(){
    int x=13;
    int i=2;
    int mask=~(1<<i); //basically for 13 -> 1101 , we will first take abit in ith position (i=2) 0010 and negate it i.e 1101 and and it with the num 
    int ans = mask & x;
    cout<<ans;
    return 0;
}