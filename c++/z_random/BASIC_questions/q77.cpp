//Find the maximum difference between pairs of array elements.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,1,90};
    int len=sizeof(array)/sizeof(array[0]);
    int diff=abs(array[0]-array[len-1]);
    for(int i=0;i<len-1;i++){
        int diff2=abs(array[i]-array[i+1]);
        if(diff<diff2){
            diff=diff2;
        }
    }
    cout<<diff;
    return 0;
}