#include <iostream>
#include<vector>
using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>> a(n,vector<int> (m));
    cout<<"INPUTING MATRIX = "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    } 

    int x1,y1;
    int x2,y2;
    cout<<"INPUTING COORDINATES 1 : ";
    cin>>x1>>y1;
    cout<<"INPUTING COORDINATES 2 : ";
    cin>>x2>>y2;
    int sum=0;

    for(int i=y1;i<=y2;i++){
        for(int j=x1;j<=x2;j++){
            sum=sum + a[i][j] ;
        }
    }
    cout<<"SUM = "<<sum;

    return 0;
}