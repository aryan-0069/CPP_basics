/*
33. Write a cpp program to replace a specified character with another character in a string.
 for ex - "abcde" user says replace a with b -> "bbcde"
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1;
    cin>>str1;
    char ch1,ch2;
    cin>>ch1>>ch2;
    for(int i=0;i<str1.length();i++){
        if(str1[i]==ch1){
            str1[i]=ch2;
        }
    }
    cout<<str1;
    return 0;
}