#include <bits/stdc++.h>
using namespace std;
//time complexity -> 0(log n)
//space complexity ->0(1)
int sqrt_x(int x){
    int num=-1;
    int lo=0,hi=x;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(mid*mid<=x){
            num = mid ;    
            lo=mid+1;       
        }
        else{
            hi=mid -1 ;
        }
    }
    return num;
}

int main(){
    int x;
    cin>>x;
    cout<<sqrt_x(x);
    return 0;
}