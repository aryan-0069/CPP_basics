//36. WAP to count the number of spaces in a string.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="aryan hela is the best";
    //cin>>str;
    int counter=0;
    for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            counter++;
        }
    }
    cout<<counter;
    return 0;
}