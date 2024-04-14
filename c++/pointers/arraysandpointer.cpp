#include <iostream>
using namespace std;

int main(){
    int arr[3]={1,2,3};
    int *ptr=&arr[0];
    cout<<arr<<" "<<ptr<<" "<<*ptr<<" "<<*arr<<endl; //hence both pointer and arr are pointing to the first element 
    //hence name of an array is also a pointer pointing to the base index of the array
    cout<<*arr<<" "<<*(arr+1)<<" "<<*(arr+2)<<endl;
    return 0;
}