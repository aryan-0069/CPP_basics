//26. Write a program to calculate profit or loss. cp and sp provided by user.
#include <iostream>
using namespace std;
int main(){
    int cp,sp;
    cin>>cp>>sp;
    if(sp>cp){
        double x=sp-cp;
        cout<<(x/cp)*100<<" % profit";
    }
    else{
        double y=cp-sp;
        cout<<(y/cp)*100<<" % loss";

    }
    return 0;
}