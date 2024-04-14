#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1="aryan";
    string s2="hela";
    //s1=s1+s2; //copy of string s1 is created
    s1+=s2; //s2 is appended at s1
    cout<<s1;
    return 0;
}