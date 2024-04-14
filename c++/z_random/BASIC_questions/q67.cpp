/*
Print the count of all elements in array. [1 , 2 , 2 , 2 , 3 , 3 ,3 ,3 , 3]
1 appears 1 time
2 appears 3 times
3 appears 5 times
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    char array[]={'a','a','a','a','a','a'};
    int len=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(array[i]>array[j]){
                int a=array[i];
                array[i]=array[j];
                array[j]=a;
            }
        }
    }
    
    for(int i=0;i<len;i++){
        int counter=1;
        for(int j=i+1;j<len;j++){
            if(array[i]==array[j]){
                counter++;
            }
        }
        cout<<array[i]<<" appeared "<<counter<<" times "<<endl;
        i=i+counter-1;
    }
    
    return 0;
}