#include<iostream>
#include<vector>
using namespace std;

void rotationMatrix(vector<vector<int>> &v){
    int row=v.size();
    int column=v[0].size();    
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<row;i++){
        //only applicable for 3 x 3 matrix
        int temp=v[i][0];
        v[i][0]=v[i][2];
        v[i][2]=temp;        
    }
    return;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    rotationMatrix(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }    
        cout<<endl;
    }    
    return 0;
}