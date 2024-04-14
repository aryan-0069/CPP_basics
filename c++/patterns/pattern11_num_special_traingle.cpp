#include <iostream>
using namespace std;

int main(){
    int n=4;
    
    
    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++){
            if(j<=i){
                cout<<j;
            }
            else{
                for(int k=i-1;k>0;k--){
                    cout<<k;
                    
                }
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}