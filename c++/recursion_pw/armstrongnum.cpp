#include <iostream>
#include<math.h>
using namespace std;

int armstrong(int n,int d){
    if(n==0) return 0;
    return pow(n%10,d) + armstrong(n/10,d); 


}

int main(){
    int n=153;

    int numofdigits = 0;
    int temp=n;
    while(temp>0){
        temp=temp/10;
        numofdigits++;
    }
    int result = armstrong(n, numofdigits);
    if(result==n){
        cout<<"yes";
    }
    else cout<<"no";

    return 0;
}