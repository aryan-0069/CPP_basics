#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if (i%2==1){
            sum=sum+i;
        }
        else{
            sum=sum-i;
        }
    }
    cout<<sum;
    return 0;
}