//22. Take 2 strings input from user and check whether they are equal or not.

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    if(str1==str2){
        cout<<"equal";
    }
    else{
        cout<<"not equal";
    }
    return 0;
}