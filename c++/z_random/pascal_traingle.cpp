#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    int n=4;
    //cin>>n;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<n+1;j++){
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<endl;
        }
        cout<<endl;
    }
    return 0;
}