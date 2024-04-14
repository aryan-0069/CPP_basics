/*
Find determinant of 2 * 2 matrix.
[4, 3]
[2, 3]

= (4*3)-(3*2)
= 12-6
= 6
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>array[i][j];
        }
    }
    int det=(array[0][0]*array[1][1])-(array[0][1]*array[1][0]);
    cout<<"DETERMINANT = "<<det;
    return 0;
}