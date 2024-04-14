#include <iostream>
#include<vector>
using namespace std;

void spiralMatrix(vector<vector<int>> &matrix){
    int direction=0;
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;

    while(top<=bottom && left<=right){
        if(direction==0){
            for(int i=left;i<=right;i++){
                cout<<matrix[top][i];
            }
            top++;
        }
        else if(direction==1){
            for(int i=top;i<=bottom;i++){
                cout<<matrix[i][right];
            }
            right--;
        }
        else if(direction==2){
            for(int i=right;i>=left;i--){
                cout<<matrix[bottom][i];
            }
            bottom--;
        }
        else{
            for(int i=bottom;i>=top;i--){
                cout<<matrix[i][left];
            }
            left++;
        }
        direction=direction+1;
        direction=direction%4;
    }

}

int main(){

    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    spiralMatrix(matrix);

    return 0;
}

