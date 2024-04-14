/*
Find sum of all rows in (n * m) matrix and print the maximum and minimum sum.
1 2
3 4
1 3
4 6
sum of row1 -> 3
sum of row2 -> 7
sum of row3 -> 4
sum of row4 -> 10
maximum is 10 and minimum is 3
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=4,m=2;
    // cin>>n>>m;
    int array[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    int maxminarray[n];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<m;j++){
            sum+=array[i][j];
        }
        cout<<"sum of row"<<i+1<<" -> "<<sum<<endl;
        maxminarray[i]=sum;
    }

    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(max<maxminarray[i]){
            max=maxminarray[i];
        }
        if(min>maxminarray[i]){
            min=maxminarray[i];
        }
    }
    cout<<"maximum is "<<max<<" and minimum is "<<min<<endl;
    return 0;
}