//38. Take string as input and print only the initials of them. for example- 
//"Computer Science" -> "CS"

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str="Indian Institute of Technology";
    // getline(cin,str);
    for(int i=0;i<str.size();i++){
        if(int(str[i])>=65 && int(str[i])<=90){
            cout<<str[i];
        }
    }
    return 0;
}