#include <iostream>
using namespace std;

int main(){
    for(int a=1;a<6;a++){

        if(a==3){
            continue;
        }
        else{
            cout<<a<<endl;
        }
    }
    return 0;
}