#include <iostream>
using namespace std;

int main(){
    int array[5]={1,2,3,4,5};
    for(int i=0;i<5;i++){
        cout<<array[i]<<endl;
    }
    for(int i:array){
        cout<<i<<endl;
    }
    int k=0;
    while(k<5){
        cout<<array[k]<<endl;;
        k++;
    }
    return 0;
}