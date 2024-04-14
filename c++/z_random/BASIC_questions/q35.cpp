//35. Write a Java program to convert all the characters in a string to uppercase.

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1="aryan";
    //cin>>str1;
    for(int i=0;i<str1.length();i++){
        if((int(str1[i]))>=97 && int(str1[i]<=122)){
            str1[i]=int(str1[i])-32;
        }
    }
    cout<<str1;
    return 0;
}