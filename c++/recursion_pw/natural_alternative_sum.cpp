//1-2+3-4+5...


#include <iostream>
using namespace std;

/*
int f(int n,int sum){
    if(n==0){
        return n;
    }
    else if(n%2==0){
        sum=sum-n;
        return sum = f(n-1,sum) + sum;
    }
    else{
        sum+=n;
        return sum = f(n-1,sum) + sum;
    }
    
}*/

int f(int n){
    if(n==0)return 0;
    return f(n-1) + ((n%2==0) ? (-n) : (n));
}

int main(){
    
    cout<<f(5);
    return 0;
}