#include <iostream>
using namespace std;

int main(){
    int array[]={1,225};
    int *ptr=&array[0];

    cout<<ptr<<" "<<*ptr<<"\n";
    cout<<ptr+1<<" "<<*(ptr+1)<<"\n";
    //post increment
    cout<<*ptr++<<"\n";
    cout<<*ptr<<"\n"; //ptr moves from array[0] to array[1]

    
    return 0;
}