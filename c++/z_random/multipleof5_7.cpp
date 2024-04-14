#include<iostream>
using namespace std;

int main(){
    int a=0;
    while(a<2){
        int i=5;
        if(i%5==0 && i%7==0){
            cout<<i;
            a+=1;
        }
        else{
            i+=5;
        }
    }
    return 0;
}