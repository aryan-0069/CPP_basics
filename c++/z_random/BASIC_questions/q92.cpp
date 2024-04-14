/*
92. Take two n * n matrix from user and add them.
for ex:
let n be 2
matrix 1:
1 2
3 4
matrix 2:
1 2
3 4
result matrix:
2 4
6 8
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    // cin>>n;
    int array1[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>array1[i][j];
        }
    }

    int array2[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>array2[i][j];
        }
    }

    int ansarray[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ansarray[i][j]=array1[i][j]+array2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ansarray[i][j];
        }
    }


    return 0;
}