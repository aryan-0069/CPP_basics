/*
Take n*n matrix and swap ith and (n-i-1)th index row.
1 2 3
4 5 6
7 8 9
4 2 6
result array:
4 2 6
7 8 9
4 5 6
1 2 3
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }
    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            int a= array[i][j];
            array[i][j]=array[n-i-1][j];
            array[n-i-1][j]=a;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}