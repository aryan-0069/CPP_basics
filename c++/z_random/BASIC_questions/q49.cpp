//Write a Java program to test if an array contains a specific value.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int num=5;
    bool flag=true;
    //cin>>num;
    for(int i=0;i<5;i++){
        if(num==array[i]){
            flag=false;
            break;
        }

    }
    if(flag==true){
        cout<<"not present";
    }
    else{
        cout<<"present";
    }
    return 0;
}