//printing 1 subsequence with a target sum

//technique to print only one answer -> use bool function
#include <bits/stdc++.h>
using namespace std;

bool targetSubsequence(int curr_idx,vector<int> &arr,int sum,vector<int> temp){
    int n = arr.size();
    if(curr_idx == n){

        //condition satisfied
        if(sum == 0){
            for(auto it:temp) cout << it << " ";
            cout << endl;
            return true;
        }
        return false;
    }

    temp.push_back(arr[curr_idx]);
    if(targetSubsequence(curr_idx+1,arr,sum-arr[curr_idx],temp)){
        return true;
    }

    temp.pop_back();
    if(targetSubsequence(curr_idx+1,arr,sum,temp)){
        return true;
    }
    return false;
}


int main(){
    vector<int> arr = {1,2,1};
    int sum = 2;
    vector<int> temp;
    targetSubsequence(0,arr,sum,temp);
    return 0;
}