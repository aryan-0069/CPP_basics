/*
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. 
The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those 
two strings lexicographically. The letters' case does not matter, that is an uppercase letter is 
considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. 
The strings' lengths range from 1 to 100 inclusive. 
It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". 
If the second string is less than the first one, print "1". 
If the strings are equal, print "0". 
Note that the letters' case is not taken into consideration when the strings are compared.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s2="aryx";
    string s1="ARyn";

    for(int i=0;i<s1.length();i++){
        if((int(s1[i]))>=65 && int(s1[i]<=92)){
            s1[i]=int(s1[i])+32;
        }
    }
    for(int i=0;i<s2.length();i++){
        if((int(s2[i]))>=65 && int(s2[i]<=92)){
            s2[i]=int(s2[i])+32;
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<s1.length();i++){
        sum1+=int(s1[i]);
        sum2+=int(s2[i]);
    }
    if(sum1>sum2){
        cout<<"1";
    }
    else if(sum2>sum1){
        cout<<"-1";
    }
    else{
        cout<<"0";
    }
    return 0;
}