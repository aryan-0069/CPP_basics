#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"A=";
    cin>>a;
    cout<<"B=";
    cin>>b;
    c=b;
    b=a;
    a=c;
    cout<<"A="<<a<<"B="<<b;


    return 0;
}