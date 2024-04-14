//Find the minimum element in array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,44,-1,56};
    int num=INT_MAX;
    for(int i=0;i<5;i++){
        if(array[i]<num){
            num=array[i];
        }
    }
    cout<<num;
    return 0;
}