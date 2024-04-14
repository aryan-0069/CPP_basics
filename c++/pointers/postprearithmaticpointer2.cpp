#include <iostream>
using namespace std;

int main(){
    int arr[3]={1,3,5};
    int *ptr=&arr[0];

    cout<<ptr<<" "<<*ptr<<endl;
    cout<<*ptr++<<endl;
    cout<<arr[0]<<" "<<arr[1]<<endl;
    cout<<ptr<<" "<<*ptr<<endl;
    
    cout<<(*ptr)++<<endl;
    cout<<arr[1]<<endl;
    cout<<*(ptr++)<<endl;
    cout<<*ptr;
    return 0;
}