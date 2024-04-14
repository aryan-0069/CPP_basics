/*
Find the sum of left diagonal and right diagonal in (n * n) matrix and print the sum with the name of the diagonal i.e if left diagonal sum is greater than right then print "Left diagonal is greater with sum:" (the actual sum) and vice versa and if both of them has same sum then print no one is greater.
1 2 3
4 5 6
8 8 9
left diag -> 15
right diag -> 16
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    // cin>>n;
    int matrix[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    int left_diagnol=0,right_diagnol=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                left_diagnol+=matrix[i][j];
            }
            if((i+j)==n-1){
                right_diagnol+=matrix[i][j];
            }
        }
    }
    cout<<"left diag -> "<<left_diagnol<<endl;
    cout<<"right diag -> "<<right_diagnol;
    return 0;
}