/*
3. Take two inputs from user a and b and find the sum from a to b
For example a = 0 and b= 5 
Answer should be - 0+1+2+3+4+5 = 15.
*/
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int sum=0;
    int x,y;
    x=(a*(a-1))/2;
    y=(b*(b+1))/2;
    sum=y-x;
    cout<<sum;
    return 0;
}