#include <bits/stdc++.h>
using namespace std;

//Generate all the subsets of an array -> 2 to the power n (n -> number of element in array)
//PowerSet Algorithm -> only applicable if n<=20
int main(){
    vector<int> arr = {3,2,4};
    int n = 3;
    int total_subsets = (1 << n);
    vector<vector<int>> subsets;
    //T.C -> O(n*total_subsets) 
    for(int i=0;i<total_subsets;i++){
        vector<int> temp;
        for(int j=0;j<n;j++){
            if((i&(1 << j)) == 1){
                temp.push_back(arr[j]);
            }
        }
        subsets.push_back(temp);
        temp.clear();
    }
    for(int i=0;i<(int)subsets.size();i++){
        for(int j=0;j<(int)subsets[i].size();j++){
            cout << subsets[i][j] << " \n" [j==(int)subsets[i].size()-1];
        }
    }
    return 0;
}