// link - https://www.codingninjas.com/studio/problems/minimum-path-sum_985349?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

int DP2(int n,int m,vector<vector<int>> &arr){
    vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
    dp[0][0] = arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i == 0 && j == 0){
                continue;
            }
            int up = INT_MAX , left = INT_MAX;
            if(i) up = dp[i-1][j];
            if(j) left = dp[i][j-1];
            dp[i][j] = min(up,left) + arr[i][j];
        }
    }
    return dp[n-1][m-1];
}

int DP1(int i,int j,vector<vector<int>> &arr,vector<vector<int>> &dp){
    if(i == 0 && j == 0){
        return arr[0][0];
    }
    if(i < 0 || j < 0){
        return INT_MAX;
    }
    if(dp[i][j] != INT_MAX){
        return dp[i][j];
    }
    int up = INT_MAX , left = INT_MAX;
    up = DP1(i-1,j,arr,dp);
    left = DP1(i,j-1,arr,dp);
    return dp[i][j] = min(up,left) + arr[i][j];
}


int recur(int i,int j,vector<vector<int>> &arr){
    if(i == 0 && j == 0){
        return arr[0][0];
    }
    if(i < 0 || j < 0){
        return INT_MAX;
    }
    int up = INT_MAX , left = INT_MAX;
    up = recur(i-1,j,arr);
    left = recur(i,j-1,arr);
    return min(up,left) + arr[i][j];
}

int minSumPath(vector<vector<int>> &grid) {
    int n = (int)grid.size();
    int m = (int)grid[0].size();
    // return recur(n-1,m-1,grid);
    // vector<vector<int>> dp(n,vector<int>(m,INT_MAX));
    // return DP1(n-1,m-1,grid,dp);
    return DP2(n,m,grid);

}