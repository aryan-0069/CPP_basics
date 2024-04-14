//37. WAP to remove all the spaces in a string.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="aryan hela is best",str1;
    //getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){ 
            continue;
        }
        else{
            str1=str1+str[i];
        }
    }
    cout<<str1;
    return 0;
}