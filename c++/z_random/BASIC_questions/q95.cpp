/*
Find sum of all cols in (n * m) matrix and print the maximum and minimum sum.
1 2 3
4 2 4
1 9 2
sum of col1 -> 6
sum of col2 -> 13
sum of col3 -> 9
maximum is 13 and minimum is 6
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
    int maxminarray[m];
    for(int j=0;j<m;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=array[i][j];
        }
        cout<<"sum of col"<<j+1<<" -> "<<sum<<endl;
        maxminarray[j]=sum;
    }

    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<m;i++){
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