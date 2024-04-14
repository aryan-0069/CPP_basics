//printing all the subsequence with a target sum

#include <bits/stdc++.h>
using namespace std;

void targetSubsequence(int curr_idx,vector<int> &arr,int sum,vector<int> temp){
    int n = arr.size();
    if(curr_idx == n){
        if(sum == 0){
            for(auto it:temp) cout << it << " ";
            cout << endl;
        }
        return;
    }

    temp.push_back(arr[curr_idx]);
    targetSubsequence(curr_idx+1,arr,sum-arr[curr_idx],temp);

    temp.pop_back();
    targetSubsequence(curr_idx+1,arr,sum,temp);
}


int main(){
    vector<int> arr = {1,2,1};
    int sum = 2;
    vector<int> temp;
    targetSubsequence(0,arr,sum,temp);
    return 0;
}