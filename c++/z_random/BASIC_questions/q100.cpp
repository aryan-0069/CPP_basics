/*
Take n*n matrix and swap ith and (n-i-1)th index col.
1 2 3
4 5 6
7 8 9
result array:
3 2 1
6 5 4
9 8 7
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
    for(int j=0;j<n/2;j++){
        for(int i=0;i<n;i++){
            int a= array[i][j];
            array[i][j]=array[i][n-j-1];
            array[i][n-j-1]=a;
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