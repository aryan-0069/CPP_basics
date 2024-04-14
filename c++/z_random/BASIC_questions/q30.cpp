//30. Write a program to find the number of vowels, consonents, digits and white space characters in a string.

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1="aryan hela is nice133 ";
    //cin>>str1;
    int vowel=0,consonant=0,digits=0,spaces=0;
    for(int i=0;i<str1.length();i++){
        if(str1[i]=='a' || str1[i]=='e' || str1[i]=='o' || str1[i]=='u' || str1[i]=='i' || str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U'){
            vowel++;
        }
        else if((str1[i]>'a' && str1[i]<'z')||(str1[i]>'A' && str1[i]>'Z')){
            consonant++;
        }
        else if(str1[i]>='0' && str1[i]<='9'){
            digits++;
        }
        else{
            spaces++;
        }
    }
    cout<<"vowels= "<<vowel<<endl;
    cout<<"consonants= "<<consonant<<endl;
    cout<<"digits= "<<digits<<endl;
    cout<<"spaces= "<<spaces<<endl;
    return 0;
}