//address of operator -> &
//data-type *pointer_name
//dereference operator -> *
#include <iostream>
using namespace std;

int main(){
    int a=5;
    float b=5.01;
    int *a1=&a;
    float *b1=&b;
    cout<<"ADDRRESS OF VARIABLE STORED IN POINTER="<<a1<<"\n";
    cout<<b1<<endl;
    //deferening OPERATOR
    cout<<"VALUE PRESENT AT THE ADDRESS STORED AT POINTER"<<*a1<<"\n";
    

    //--------------------------

    a=31;
    cout<<"NEW UPDATED VALUE OF X="<<a<<"\n";
    cout<<"ptr still pointing to same memory which is 23 = "<<a1<<endl;


    //updating a with pointer
    *a1=50;
    cout<<"NEW VSLUE OF A "<<a<<"\n";
    cout<<"NEW VALUE POINTER BY A1 "<<*a1;


    return 0;

}