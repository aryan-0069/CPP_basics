//Find the sum of even rows and even cols i.e rows and cols both must be even.

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
    for(int j=0;j<n;j++){
        int sumcol=0,key1=0;
        for(int i=0;i<n;i++){
            if(j%2==0){
                sumcol+=array[i][j];
            }
            
        }
        if(j%2==0){
            cout<<"sum of col"<<j<<" = "<<sumcol<<endl;
        }
    }
    for(int i=0;i<n;i++){
        int sumrow=0;
        for(int j=0;j<n;j++){
            if(i%2==0){
                sumrow+=array[i][j];
            }
            
        }
        if(i%2==0){
            cout<<"sum of row"<<i<<" = "<<sumrow<<endl;
        }
    }
    return 0;
}