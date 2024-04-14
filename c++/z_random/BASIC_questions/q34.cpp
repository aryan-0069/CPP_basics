//34. Write a Java program to convert all the characters in a string to lowercase.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1="aRYAN";
    //cin>>str1;
    for(int i=0;i<str1.length();i++){
        if((int(str1[i]))>=65 && int(str1[i]<=92)){
            str1[i]=int(str1[i])+32;
        }
    }
    cout<<str1;
    return 0;
}