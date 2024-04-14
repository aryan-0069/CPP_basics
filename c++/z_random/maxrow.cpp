#include <iostream>
#include <vector>
using namespace std;

int maxONErow(vector<vector<int>> &v){
    int MAXONEROW=-1;
    int MAXONE=0;
    int row=v.size();
    int column=v[0].size();
    for(int i=0;i<row;i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numofones=4-j;
                if(numofones>MAXONE){
                    MAXONE=numofones;
                    MAXONEROW=i;
                }
                

            }
            break;
        }
    }
    return MAXONEROW;
}

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> vec(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    int maxrow=maxONErow(vec);
    cout<<"PRINTING THE INDEX OF ROW WITH MAX NUMBER OF ONES = "<<endl;
    cout<<maxrow<<endl;


    return 0;
}