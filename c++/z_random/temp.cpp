//prime number
#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    int k=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            k=1;
            
        }
        else{
            continue;
        }
        
    }
    if(k==1){
        cout<<"NOT PRIME";
    }
    else{
        cout<<" PRIME";
    }
    
    return 0;
}