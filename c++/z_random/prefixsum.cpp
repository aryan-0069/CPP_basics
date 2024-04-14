#include <iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    for(int i=4;i>=0;i--){
        for(int j=0;j<i;j++){
            array[i]=array[i]+array[j];
        }
    }
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
    return 0;
}