#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>> createSpiralMatrix(int n){
    vector<vector<int>>matrix(n, vector<int> (n));
    int direction=0;
    int left=0;
    int right=matrix[0].size()-1;
    int top=0;
    int bottom=matrix.size()-1;
    int value=1;

    while(top<=bottom && left<=right){
        if(direction==0){
            for(int i=left;i<=right;i++){
                matrix[top][i]=value++;
            }
            top++;
        }
        else if(direction==1){
            for(int i=top;i<=bottom;i++){
                matrix[i][right]=value++;
            }
            right--;
        }
        else if(direction==2){
            for(int i=right;i>=left;i--){
                matrix[bottom][i]=value++;
            }
            bottom--;
        }
        else{
            for(int i=bottom;i>=top;i--){
                matrix[i][left]=value++;
            }
            left++;
        }
        direction=direction+1;
        direction=direction%4;
    }
    return matrix;

}

int main(){

    int n;
    cin>>n;
    
    vector<vector<int >> matrix(n ,vector <int> (n));

    matrix=createSpiralMatrix(n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }

    return 0;
}

