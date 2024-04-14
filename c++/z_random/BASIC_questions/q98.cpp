/*
Find determinant of 3 * 3 matrix.
[1, 3, -2]
[-1, 2, 1]
[1, 0, -2]

= 1(-4-0)-3(2-1)+(-2)(0-2)
= -4-3+4
= -3
*/

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
    int det=array[0][0]*((array[1][1]*array[2][2])-(array[1][2]*array[2][1]))-array[0][1]*((array[1][0]*array[2][2])-(array[1][2]*array[2][0]))+array[0][2]*((array[1][0]*array[2][1])-(array[1][1]*array[2][0]));
    cout<<"determinant = "<<det; 
    return 0;
}