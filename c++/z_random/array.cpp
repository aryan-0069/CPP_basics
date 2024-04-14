#include <iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};
    cout<<array[1]<<endl;
    array[2]=5;
    cout<<array[2]<<endl;
    cout<<sizeof(array);
    

    return 0;
}