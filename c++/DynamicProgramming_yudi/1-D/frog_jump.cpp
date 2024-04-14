//PROBLEM LINK - https://www.codingninjas.com/studio/problems/frog-jump_3621012?count=25&page=12&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
using namespace std;

//using recursion , this gives TLE
int recur(int curr,vector<int> &heights,vector<int> &dp){
    if(curr == 0){
        return 0;
    }
    if(curr == 1){
        return recur(curr-1,heights,dp) + (heights[curr]-heights[curr-1]);
    }
    else{
        int a = recur(curr-1,heights,dp) + abs(heights[curr]-heights[curr-1]);
        int b = recur(curr-2,heights,dp) + abs(heights[curr]-heights[curr-2]);
        return min(a,b);
    }
}


// using top-down DP ,this passes
int DP1(int curr,vector<int> &heights , vector<int> &dp){
    if(curr == 0){
        return 0;
    }
    if(dp[curr] != INT_MAX) {
        return dp[curr];
    }
    if(curr == 1){
        return dp[curr] = DP1(curr-1,heights,dp) + abs(heights[curr]-heights[curr-1]);
    }
    else{
        int a = DP1(curr-1,heights,dp) + abs(heights[curr]-heights[curr-1]);
        int b = DP1(curr-2,heights,dp) + abs(heights[curr]-heights[curr-2]);
        return dp[curr] = min(a,b);
    }
}


// using BOTTOM-UP DP
int DP2(int n,vector<int> &heights){
    vector<int> dp(n,INT_MAX);
    dp[0] = 0;
    for(int i=1;i<n;i++){
        if(i == 1){
            dp[i] = dp[i-1] + abs(heights[i]-heights[i-1]);
        }
        else{
            int a = dp[i-1] + abs(heights[i]-heights[i-1]);
            int b = dp[i-2] + abs(heights[i]-heights[i-2]);
            dp[i] = min(a,b);
        }
    }
    return dp[n-1];
}

int frogJump(int n, vector<int> &heights){
    vector<int> dp(n+1,INT_MAX);
    return DP2(n,heights);
}
