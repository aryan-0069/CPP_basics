/*
Find the sum of boundary of matrix.
1 2 3
4 5 6
7 8 9
sum -> 1+2+3+6+9+8+7+4 -> 40
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int n=3;
    //cin>>n;
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0 || i==n-1 || j==n-1){
                sum+=array[i][j];
            }
        }
    }
    cout<<"boundary sum = "<<sum<<endl;
    return 0;
}