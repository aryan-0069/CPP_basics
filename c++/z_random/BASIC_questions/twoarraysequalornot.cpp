#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr1[]={1,2,3,4};
    int arr2[]={1,2,3,4};
    int size1=sizeof(arr1);
    int size2=sizeof(arr2);
    
    if(size1!=size2){
        cout<<"size not equal";
    }
    else{
        int a=0;
        for(int i=0;i<4;i++){
            if(arr1[i]!=arr2[i]){
                a=1;
                break;
            }
        }
        if(a==1){
            cout<<"array not same";
        }
        else if(a==0){
            cout<<"array same";
        }
    }
    
    return 0;
}