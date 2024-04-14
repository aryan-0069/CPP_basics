// check is string is PLALINDROME OR NOT

#include <bits/stdc++.h>
using namespace std;



bool isPallindrome(string s,int index,int size){
    if(index >= size/2){
        return true;
    }
    if(s[index] != s[size - index -1]){
        return false;
    }
    return isPallindrome(s,index+1,size);
}

int main(){
    string s; cin >> s;
    cout << (isPallindrome(s,0,s.size()) ? "TRUE\n" : "FALSE\n") ;
    return 0;
}