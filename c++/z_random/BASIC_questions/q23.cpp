//23. Take a string and 2 range (l , r) and print the subsrting.
#include <iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cin>>str;
    int l,r;
    cin>>l>>r;
    for(int i=l-1;i<r;i++){
        cout<<str[i];
    }
    return 0;
}