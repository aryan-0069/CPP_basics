//Take two n * n matrix from user and subtract them.

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
            ansarray[i][j]=array1[i][j]-array2[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ansarray[i][j];
        }
    }


    return 0;
}