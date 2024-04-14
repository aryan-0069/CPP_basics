//Find position of maximum element in array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int num=INT_MIN,hi=0;
    for(int i=0;i<5;i++){
        if(array[i]>num){
            num=array[i];
            hi=i;
        }
    }
    cout<<hi;
    return 0;
}