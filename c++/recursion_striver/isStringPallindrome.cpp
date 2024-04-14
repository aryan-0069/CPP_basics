#include <bits/stdc++.h>
using namespace std;


bool isPallindrome(string s,int index,int size){
    if(index >= (size/2)){
        return true;
    }
    if(index <= (size/2) && s[index] != s[size-index-1]){
        return false;
    }
    return isPallindrome(s,index+1,size);
    
}
                      
int main(){
    string s; cin >> s;
    bool ans = isPallindrome(s,0,s.size());
    cout << (ans ? "TRUE\n" : "FALSE\n") ;
    return 0;
}