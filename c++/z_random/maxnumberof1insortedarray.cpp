//given a 2D array , wheere each row is row is sorted . Find the row with the maximum no .of 1
#include <iostream>
#include <vector>
using namespace std;

int maxOnesRow(vector<vector<int>> &v){
    int maxones=INT8_MIN;
    int maximumonerows=-1;
    int column = v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if (v[i][j]==1){
                int numberofones= column-j;
                if(numberofones>maxones){
                    maximumonerows=i;
                    maxones=numberofones;
                }
                break;
            }
        }

    }
    return maximumonerows;
    

}

int main(){
    int n,m;
    cin >>n>>m;
    vector<vector<int>> vec(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }
    
    int res=maxOnesRow(vec);
    cout<<res<<endl;
    return 0;
}