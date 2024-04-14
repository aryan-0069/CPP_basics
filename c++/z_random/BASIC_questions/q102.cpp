//Find the sum of odd indexed rows.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(i%2!=0){
                sum+=array[i][j];
            }
            
        }
        if(i%2!=0){
            cout<<"sum of row"<<i<<" = "<<sum<<endl;
        }
    }
    return 0;
}