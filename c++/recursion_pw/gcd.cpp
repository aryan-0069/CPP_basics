#include <iostream>
using namespace std;

/*
without recursion
int main(){
    int x=12,y=36,k=0,l;
    for(int i=2;i<=y;i++){
        if(x%i==0 && y%i==0){
            k=1;
            l=i;
        }
    }
    if(k==1){
        cout<<l;
    }
    else{
        cout<<1;
    }
    return 0;
}
*/

int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    if(b==0) return a;
    return gcd(a%b,b);
}


int main(){
    //a>b -> always
    cout<<gcd(40,45);
    return 0;
}