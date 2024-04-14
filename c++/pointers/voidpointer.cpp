#include <iostream>
using namespace std;

int main(){
    float p=7.2;
    int x=19;
    void *ptr=&p;
    ptr=&x;

    int*integerpointer=(int *)ptr;  // typing casting void pointer as it cant be dereference

    cout<<*integerpointer;

    return 0;
}