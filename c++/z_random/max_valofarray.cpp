#include <iostream>
using namespace std;

int main(){
    int array[]={1,4,33,11,89};
    int max=0;
    for(int i=0;i<5;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max;
    return 0;
}