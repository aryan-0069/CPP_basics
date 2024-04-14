#include <iostream>
using namespace std;

int result(int *arr,int arrlen,int targetnum,int i){
    if(arr[i]==targetnum){
        return true;
    }
    if(i==arrlen-1) return false;
    return result(arr,arrlen,targetnum,i+1);
}

int main(){
    int arr[]={1,2,3,4,45,5,5};
    int arrlen=7;
    int targetnum=45;
    int f=result(arr,arrlen,targetnum,0);
    if(f) cout<<"TRUE";
    else cout<<"false";
    return 0;
}