#include <iostream>
using namespace std;
int p=5;
int main(){
    int p=7;
    cout<<"WITHOUT OPERATOR"<<p<<endl;
    cout<<"WITH OPERATOR"<<::p;
    return 0;
}