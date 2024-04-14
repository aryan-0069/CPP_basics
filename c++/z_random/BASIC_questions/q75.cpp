/*
Find the number of peak element in array. peak element means the element should be greater than its's previous element 
and greater than it's next element, since 0th index cannot have peak because there is no -1 index and last index cannot 
have peak because there cannot be nth index possible.
for ex -> [1 , 2 , 1 , 4 , 5 , 4] -> answer is 2 , element at index 1 and index 4 is peak element. 
[2 > 1 (left wala) 2 > 1(right wala)] && [5 > 4(left wala) 5 > 4(right wala)]
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,1,4,5,4};
    int len=sizeof(array)/sizeof(array[0]);
    int counter=0;
    for(int i=1;i<len-1;i++){
        if(array[i]>array[i-1] && array[i]>array[i+1]){
            counter++;
            cout<<array[i]<<" ";
        }
    }
    cout<<endl<<"no of peak element = "<<counter;
    return 0;
}