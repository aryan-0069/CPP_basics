#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num=432;
    string str=to_string(num);
    str+='1';
    cout<<str<<endl;
    cout<<str[2]; //also used for slicing int values
    
    return 0;
}