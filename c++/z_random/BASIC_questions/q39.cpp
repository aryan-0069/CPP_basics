/*
39. Reverse the first half of the string. for ex- "abcde" -> "bacde"
another ex- "abcdef" -> "cbadef"
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="abcde";
    int n=str.size();
    for(int i=0;i<n/4;i++){
        char a = str[i];
        str[i]=str[n/2-i-1];
        str[n/2-i-1]=a;
    }
    cout<<str;
    return 0;
}