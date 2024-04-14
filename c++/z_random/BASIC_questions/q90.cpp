/*
Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. 
That's why he decided to invent an extension for his favorite browser that would change the letters' 
register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. 
At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, 
and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, 
you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. 
Your task is to use the given method on one given word.
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="HoUse";
    // cin>>str;
    int upper=0,lower=0;
    for(int i=0;i<str.size();i++){
        if(int(str[i])>=65 && int(str[i])<=90){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(lower>upper){
        for(int i=0;i<str.length();i++){
            if((int(str[i]))>=65 && int(str[i]<=92)){
                str[i]=int(str[i])+32;
            }
        }
    }
    else if(upper>lower){
        for(int i=0;i<str.length();i++){
            if((int(str[i]))>=97 && int(str[i]<=122)){
                str[i]=int(str[i])-32;
            }
        }
    }
    else{
        for(int i=0;i<str.length();i++){
            if((int(str[i]))>=65 && int(str[i]<=92)){
                str[i]=int(str[i])+32;
            }
        }
    }
    cout<<str;

    return 0;
}