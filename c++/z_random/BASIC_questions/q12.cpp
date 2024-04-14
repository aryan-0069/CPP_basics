/*
12. A shop will give discount of 10% if the cost of purchased quantity is more than 1000. Ask 
user for quantity. Suppose, one unit will cost 100. Judge and print total cost for user.
*/

#include <iostream>
using namespace std;
int main(){
    int a ;
    cin>>a;
    if(a>10){
        int dis=a/10;
        cout<<(a-dis)*100;
    }
    else{
        cout<<a*100;
    }
    return 0;
}