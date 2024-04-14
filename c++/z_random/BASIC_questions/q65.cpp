/*
Find number of even numbers and odd numbers and store the position of even in other array and same for odd. 
for ex -> [5 , 10 , 15 , 20] -> no. of even - 2 , odd - 2. Even position -> [1 , 3] , Odd position -> [0 , 2]
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={5,10,15,20};
    int f=sizeof(array)/4;
    int even=0,odd=0;
        
    for(int i=0;i<f;i++){
        if(array[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    int evenRR[even];
    int oddRR[odd];
    int oddcounter=0;
    int evencounter=0;
    for(int i=0;i<f;i++){
        if(array[i]%2==0){
            evenRR[evencounter]=i;
            evencounter++;
        }
        else{
            oddRR[oddcounter]=i;
            oddcounter++;
        }
    }
    cout<<"no of even - "<<even<<" , odd - "<<odd<<endl;
    cout<<"odd position -> ";
    for(int i=0;i<odd;i++){
        cout<< oddRR[i]<<" ";
    }
    cout<<", even position -> ";
    for(int i=0;i<even;i++){
        cout<< evenRR[i]<<" ";
    }


    return 0;
}