#include<iostream>
using namespace std;

int square(int p,int q){
    if(q==0){
        return 1;
    }
    else{
        return p*square(p,q-1);
    }
}

int main(){
    cout<<square(2,5);
    return 0;
}