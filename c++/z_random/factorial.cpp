#include <iostream>
using namespace std;

int main(){
    int num=5;
    int fact=1;
    for(int i=num;i>=1;i--){
        fact=fact*i;


    }
    cout<<fact;
    return 0;
}