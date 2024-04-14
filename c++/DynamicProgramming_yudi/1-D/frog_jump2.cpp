// PROBLEM LINK - https://atcoder.jp/contests/dp/tasks/dp_b

#include <bits/stdc++.h>
using namespace std;
#define int int64_t


//APPROACH 1 -> USING RECURSION
int recur(int curr,vector<int> &arr,int k){
    if(curr == 0){
        return 0;
    }
    int steps = INT_MAX;
    for(int i=1;i<=min(curr,k);i++){
        steps = min(steps,recur(curr-i,arr,k) + abs(arr[curr] - arr[curr - i]));
    }
    return steps;
} 


//APPROACH 2 -> TOP DOWN DP
int DP1(int curr,vector<int> &arr,int k,vector<int> &dp){
    if(curr == 0){
        return 0;
    }
    if(dp[curr] != INT_MAX){
        return dp[curr];
    }
    int steps = INT_MAX;
    for(int i=1;i<=min(curr,k);i++){
        steps = min(steps,DP1(curr-i,arr,k,dp) + abs(arr[curr] - arr[curr - i]));
    }
    return dp[curr] = steps;
} 


//APPROACH 3 -> BOTTOM UP DP
int DP2(vector<int> &arr,int k){
    int n = arr.size();
    vector<int> dp(n , 0);
    dp[0] = 0;
    for(int curr=1; curr<n; curr++) {
        int steps = INT_MAX;
        for(int i=1;i<=min(curr,k);i++){
            steps = min(steps , dp[curr - i] + abs(arr[curr] - arr[curr - i]));
        }
        dp[curr] = steps;
    }
    return dp[n - 1];
}



signed main(){
    int n,k; cin >> n >> k;
    vector<int> arr(n);
    for(auto &i : arr) cin >> i;
    // cout << recur(n-1,arr,k) << endl;
    vector<int> dp(n+1,INT_MAX);
    // cout << DP1(0,arr,k,dp) << endl;
    cout << DP2(arr,k) << endl;
    
    return 0;
}