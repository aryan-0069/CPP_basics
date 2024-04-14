//42. take two strings, concatenate(add) them and print the reverse. 
//for ex- "abc" and "cde" -> after concatenation -> "abccde" -> after reverse -> "edccba".
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1="abc",s2="cde",s3;
    // getline(cin,s1);
    // getline(cin,s2);
    s3=s1+s2;
    for(int i=s3.size()-1;i>=0;i--){
        cout<<s3[i];
    }
    return 0;
}