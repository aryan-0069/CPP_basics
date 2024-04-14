/*
Print the transpose of a matrix.
1 2 3
4 5 6
7 8 9
result:
1 4 7
2 5 8
3 6 9
Converting rows of a matrix into columns and columns of a matrix into row is called transpose of a matrix.
*/

#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int matrix[a][b];
    cout<<"INPUTING MATRIX"<<endl;

    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>matrix[i][j];
        }
    }

    int transposematrix[b][a];

    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            transposematrix[i][j]=matrix[j][i];
        }
    }
    cout<<"TRANSPOSE MATIX = "<<endl;
    for(int i=0;i<b;i++){
        for(int j=0;j<a;j++){
            cout<<transposematrix[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}