#include <bits/stdc++.h> 
using namespace std;


int recur(int curr, vector<int> weight, vector<int> value, int maxWeight){
    if(curr == 0){
        if(maxWeight >= weight[0]){
            return value[0];
        }
        return 0;
    }

    int incl = 0 , excl = 0;
    if(weight[curr] <= maxWeight){
        incl = value[curr] + recur(curr - 1, weight, value, maxWeight - weight[curr]);
    }
    excl = recur(curr - 1, weight, value, maxWeight);
    return max(incl, excl);
}

int DP1(int curr, vector<int> weight, vector<int> value, int maxWeight, vector<vector<int>> &dp){
	if(curr == 0){
        if(maxWeight >= weight[0]){
            return value[0];
        }
        return 0;
    }
	if(dp[curr][maxWeight] != -1){
		return dp[curr][maxWeight];
	}
    int incl = 0 , excl = 0;
    if(weight[curr] <= maxWeight){
        incl = value[curr] + DP1(curr - 1, weight, value, maxWeight - weight[curr], dp);
    }
    excl = DP1(curr - 1, weight, value, maxWeight, dp);
    return dp[curr][maxWeight] = max(incl, excl);
}




int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) {
	// recursion
    // return recur(n-1, weight, value, maxWeight);

	// DP1
	vector<vector<int>> dp(n, vector<int> (maxWeight + 1, -1));
	return DP1(n-1, weight, value, maxWeight, dp);
}