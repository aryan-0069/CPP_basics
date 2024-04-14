//Find the sum of even indexed cols.


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
        int sum=0;
        for(int i=0;i<n;i++){
            if(j%2==0){
                sum+=array[i][j];
            }
            
        }
        if(j%2==0){
            cout<<"sum of col"<<j<<" = "<<sum<<endl;
        }
    }
    return 0;
}