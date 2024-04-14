//40. Find the shortest character in a string. for ex- "bcdaef" -> 'a'.
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="aryan";
    char ch='z';
    for(int i=0;i<str.length();i++){
        if(int(str[i])<int(ch)){
            ch=str[i];
        }
    }
    cout<<ch;
    return 0;
}