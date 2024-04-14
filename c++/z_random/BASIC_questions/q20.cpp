//20. Convert lowerCase to Upper and vice versa.
#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(int(ch)>=97 && int(ch)<=122){
        int x=int(ch)-32;
        cout<<char(x);
    }
    else{
        int f=int(ch)+32;
        cout<<char(f);
    }
    return 0;
}