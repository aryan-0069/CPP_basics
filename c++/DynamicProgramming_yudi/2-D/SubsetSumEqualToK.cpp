#include <bits/stdc++.h> 
using namespace std;

bool DP2(int target, vector<int> &arr){
    int n = arr.size();
    vector<vector<bool>> dp(n,vector<bool> (target,false));
    for(int i=0;i<n;i++) dp[i][0] = true;
    dp[0][arr[0]] = true;
    for(int curr=1;curr<n;curr++){
        for(int sum=1;sum<=target;sum++){
            bool notTake = dp[curr-1][sum];
            bool take = false;
            if(arr[curr] <= sum) take = dp[curr - 1][curr - arr[curr]];
            dp[curr][sum] = take || notTake;
        }
    }
    return dp[n-1][target];
}


bool DP1(vector<int> &arr,int curr,vector<vector<int>> &dp,int sum){
    if(curr < 0){
        if(sum == 0){
            return true;
        }
        return false;
    }
    if(dp[curr][sum] != -1){
        if(dp[curr][sum] == 1){
            return true;
        }
        return false;
    }
    bool  incl = DP1(arr,curr-1,dp,sum - arr[curr]);
    bool  excl = DP1(arr,curr-1,dp,sum);
    bool ans = incl || excl;
    if(ans){
        dp[curr][sum] = 1;
    }
    else{
        dp[curr][sum] = 0;
    }
    return ans;
}

bool recur(vector<int> &arr,int curr,int sum){
    if(curr < 0){
        if(sum == 0){
            return true;
        }
        return false;
    }
    int incl = recur(arr,curr-1,sum - arr[curr]);
    if(incl) return true;
    int excl = recur(arr,curr-1,sum);
    return incl || excl;
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // return recur(arr,n-1,k);
    vector<vector<int>> dp(n,vector<int>(k,-1));
    return DP1(arr,n-1,dp,k);
}