// link - https://www.codingninjas.com/studio/problems/total-unique-paths_1081470

#include <bits/stdc++.h> 
using namespace std;


// USING RECURSION
int recur(int x,int y){
	// base case
    if(x == 1 && y == 1){
        return 1;
    }
    if(x < 1 || y < 1){
        return 0;
    }
    int left = recur(x-1,y);
    int up = recur(x,y-1);
    return up + left;
}

int recur(int x,int y){
    if(x == 0 && y == 0){
        return 1;
    }
    if(x < 0 || y < 0){
        return 0;
    }
    int up = recur(x,y-1);
    int left = recur(x-1,y);
    return up + left;
}


// TOP DOWN DP
int DP1(int x,int y,vector<vector<int>> &dp){
	if(x == 1 && y == 1){
		return dp[x][y] = 1;
	}
	if(x < 1 || y < 1){
        return dp[x][y] = 0;
    }
	if(dp[x][y] != -1){
		return dp[x][y];
	}

	int up = DP1(x,y-1,dp);
	int left = DP1(x-1,y,dp);
	return dp[x][y] = up+left;
}


// BOTTOM UP DP
int DP2(int x,int y){
	vector<vector<int>> dp(x,vector<int> (y,0));
	dp[0][0] = 1;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(i == 0 && j == 0) {
				dp[i][j] = 1;
				continue;
			}
			int up = 0;
			if(i >= 1) {
				up = dp[i - 1][j];
			}
			int left = 0;
			if(j >= 1) {
				left = dp[i][j - 1];
			}
			dp[i][j] = up + left;
		}
	}
	return dp[x - 1][y - 1];
}


int uniquePaths(int m, int n) {
	return DP2(m,n);
}