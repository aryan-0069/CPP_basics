//5. Write a program in Java to input 5 numbers from keyboard and find their sum and average.
#include <iostream>
using namespace std;
int main(){
    double x=0,sum=0;
    for(int i=0;i<5;i++){
        cin>>x;
        sum+=x;

    }
    cout<<"SUM="<<sum;
    cout<<"AVG="<<sum/5;
    return 0;
}