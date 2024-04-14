#include<iostream>
using namespace std;

int main(){
    int num;
    int digits=0;
    cin>>num;
    while(num!=0){
        num=num/10;
        digits+=1;
    }
    cout<<digits;
    return 0;
}