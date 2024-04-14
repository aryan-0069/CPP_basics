// link - https://www.codingninjas.com/studio/problems/maze-obstacles_977241?leftPanelTabValue=PROBLEM
#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9+7;

bool isValid(int i,int j,vector<vector<int>> &arr){
    if(i < 0 || j < 0 || arr[i][j] == -1){
        return false;
    }
    return true;
}

int recur(int i,int j,vector<vector<int>> &arr){
    if(i == 0 && j == 0){
        return 1;
    }
    if(i < 0 || j < 0){
        return 0;
    }

    int up = 0;
    int left = 0;
    // for up 
    if(isValid(i-1,j,arr)){
        up = recur(i-1,j,arr);
    }
    // for left
    if(isValid(i,j-1,arr)){
        left = recur(i,j-1,arr);
    }
    return up + left;
}

int DP1(int i,int j,vector<vector<int>> &arr,vector<vector<int>> &dp){
    if(i == 0 && j == 0){
        return 1;
    }
    if(i < 0 || j < 0){
        return 0;
    }
    if(dp[i][j] != -1){
        return (dp[i][j]) % MOD;
    }
    int up = 0;
    int left = 0;

    // for up 
    if(isValid(i-1,j,arr)){
        up = (DP1(i-1,j,arr,dp) % MOD);
    }
    // for left
    if(isValid(i,j-1,arr)){
        left = (DP1(i,j-1,arr,dp) % MOD);
    }
    return dp[i][j] = (up + left) % MOD;
}

int DP2(int n,int m,vector<vector<int>> &arr){
    vector<vector<int>> dp(n,vector<int> (m,-1));
    dp[0][0] = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i == 0 && j == 0){
                continue;
            }
            int left = 0 , up = 0;
            if(isValid(i-1,j,arr)){
                up = (dp[i-1][j]) % MOD;                
            }
            if(isValid(i,j-1,arr)){
                left = (dp[i][j-1]) % MOD;
            }
            dp[i][j] = (left + up) % MOD; 
        }
    }
    return dp[n-1][m-1];
}
int opti(int n,int m,vector<vector<int>> &arr){
    vector<int> prev(m);
    prev[0] = 1;
    for(int i=0;i<n;i++){
        vector<int> curr(m,0);
        for(int j=0;j<m;j++){
            if(i == 0 && j == 0){
                curr[0] = 1;
                continue;
            }
            int left = 0 , up = 0;
            if(isValid(i-1,j,arr)){
                up = (prev[j]) % MOD;                
            }
            if(isValid(i,j-1,arr)){
                left = (curr[j-1]) % MOD;
            }
            curr[j] = (left + up) % MOD; 
        }
        prev = curr;
    }
    return prev[m-1];
}

int mazeObstacles(int n, int m, vector<vector<int>> &arr) {
    // return recur(n-1,m-1,mat);
    // vector<vector<int>> dp(n,vector<int>(m,-1));
    // return DP1(n-1,m-1,arr,dp);
    return DP2(n,m,arr);
}


