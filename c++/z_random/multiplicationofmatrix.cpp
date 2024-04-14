#include <iostream>
using namespace std;

int main(){
    
    int nr1,nc1;
    cout<<"ENTER NUMBER OF ROW AND COLUMN FOR MATRIX 1 = ";
    cin>>nr1>>nc1;
    int matrix1[nr1][nc1];

    for(int i=0;i<nr1;i++){
        for(int j=0;j<nc1;j++){
            cin>>matrix1[i][j];
        }
    }
    
    int nr2,nc2;
    cout<<"ENTER NUMBER OF ROW AND COLUMN FOR MATRIX 2 = ";
    cin>>nr2>>nc2;
    int matrix2[nr2][nc2];

    for(int i=0;i<nr2;i++){
        for(int j=0;j<nc2;j++){
            cin>>matrix2[i][j];
        }
    }


    if(nc1!=nr2){
        cout<<"sorry matrix multiplication is not posssible in this case"<<endl;
    }

    int ANSarray[nr1][nc2];


    for(int i=0;i<nr1;i++){
        for(int j=0;j<nc2;j++){
            int value=0;
            for(int k=0;k<nc2;k++){
                value+=matrix1[i][k]*matrix2[k][j];
            }
            ANSarray[i][j]=value;
        }
    }
    cout<<"RESULTANT MATRIX"<<endl;

    for(int i=0;i<nr1;i++){
        for(int j=0;j<nc2;j++){
            cout<<ANSarray[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}