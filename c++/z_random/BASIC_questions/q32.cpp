//32. Check two strings are equal or not. IGNORE THE CASE.
//for ex- "abcde" is same as "AbCdE".

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str1="arYan",str2="ARYwn";
    //cin>>str1>>str2;
    for(int i=0;i<str1[i];i++){
        if((int(str1[i]))>=65 && (int(str1[i]))<=90){
            str1[i]=(int(str1[i])+32);
        }
        
    }
    for(int i=0;i<str2[i];i++){
        if((int(str2[i]))>=65 && (int(str2[i]))<=90){
            str2[i]=(int(str2[i])+32);
        }
        
    }
    if(str1==str2){
        cout<<"same";
    }
    else{
        cout<<"notsame";
    }
    return 0;
}