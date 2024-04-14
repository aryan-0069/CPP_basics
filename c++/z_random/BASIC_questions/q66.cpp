//Find number of unique elements in array. [1 , 2 , 2 , 2 , 3] -> answer 3

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,2,2,3,3};
    int n=sizeof(array)/sizeof(array[0]);
    int counter=0,a=0;
    for(int i=0;i<n;i++){     
        for(int j=i+1;j<=n;j++){
            a=0;
            if(array[i]==array[j]){
                a=1;
                break;
            }
        }
        if(a==0){
            counter++;
        }
    }
    cout<<counter;
    return 0;
}