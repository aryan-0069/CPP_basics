#include <iostream>
using namespace std;

int sum(int n){
    if(n>0 && n<=9){
        return n;
    }
    else{
        return sum(n/10) + n%10;
    }
}

int main(){
    int n=1234;
    cout<<sum(n);

    return 0;
}