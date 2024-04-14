//only increment or decrement happens in pointer
#include <iostream>
using namespace std;

int main (){
    int x = 10;
    double dec =9.8;
    int *ptr=&x;
    double *ptrd=&dec;

    cout<<"SIZE OF X IS = "<<sizeof(x)<<endl;
    cout<<"SIZE OF Dec IS = "<<sizeof(dec)<<"\n";

    cout<<ptr<<" "<<ptr +1<<"\n";
    cout<<ptrd<<" "<<ptrd+1<<" "<<ptrd +2<<"\n";



    return 0;
}