#include <iostream>
using namespace std;

int main(){
    
    int array[]={1,2,344,400};
    bool sortedarray=true;
    for(int i=1;i<4;i++){
        if(array[i]<array[i-1]){
            sortedarray=false;;
        }        
    }
    cout<<sortedarray;
    return 0;
}