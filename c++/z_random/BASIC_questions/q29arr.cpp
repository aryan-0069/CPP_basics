#include <bits/stdc++.h>
using namespace std;
int main(){
    
    char array[]={'U','m','b','r','e','l','l','a'};
    int f=sizeof(array);
    int a=0;
    for(int i=0;i<f;i++){
        if(array[i]=='e'){
            a=1;
        }
    }
    if(a==1){
        cout<<"PRESENT";
    }
    else{
        cout<<"NOT PRESENT";
    }
    return 0;
}