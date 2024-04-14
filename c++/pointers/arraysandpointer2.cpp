#include <iostream>
using namespace std;
void process(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<endl;
    }
    *(a+2)=33;
}
int main(){
    int arr[3]={1,2,3};
    process(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}