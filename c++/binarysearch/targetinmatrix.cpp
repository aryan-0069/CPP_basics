/*
search the target value in 2d matrix of dimension mxn and return 1 if found 
and 0 if not , also the matrix must follow the following rules
i)integers in each row is sorted from left to right
ii)the first integer in each row is greater than the last integer of previous row
*/


#include <bits/stdc++.h>
using namespace std;

int matrix_BS_search(vector<vector<int>> &v,int target){
    int n = v.size();
    int m = v[0].size();
    int lo = 0;
    int hi = n*m - 1;
    while(lo<=hi){
        int mid = lo + (hi - lo)/2;
        int x=mid/m;
        int y =mid%m;
        if(v[x][y]==target) return 1;

        else if(v[x][y]>target){
            hi = mid -1;
        }
        else{
            lo = mid +1;
        }
        
    }
    return 0;
}

int main(){
    vector<vector<int>> v ={{1,3,5,7},{9,10,12,14},{16,18,19,20},{22,23,25,26}};
    int target = 15;
    cout<<matrix_BS_search(v,target)<<endl;
    return 0;
}