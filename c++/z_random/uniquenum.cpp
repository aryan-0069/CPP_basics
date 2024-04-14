#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> array = {1,3,3,4,1};
    //better approach
    sort(array.begin(),array.end());
    auto it = unique(array.begin(),array.end());
    for(auto x=array.begin();x!=it;x++){
        cout<<*x<<" ";
    }

    //brute force
    // for(int i=0;i<5;i++){
    //     for(int j=i+1;j<5;j++){
    //         if(array[i]==array[j]){
    //             array[i]=array[j]=-1;      
    //         }
    //     }
    // }
    // for (int i = 0; i < 5; i++) {
    //     if(array[i]!=-1){
    //         cout<<array[i];
    //     }
    // }
    
    return 0;
}