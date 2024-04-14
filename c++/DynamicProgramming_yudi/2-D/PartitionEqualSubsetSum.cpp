#include <bits/stdc++.h>
using namespace std;

bool recur(int curr, int sum, vector<int> & arr){
	if(sum == 0){
		return true;
	}
	if(curr < 0){
		return (sum == 0);
	}
	bool incl = false , excl = false;
	if(sum >= arr[curr]) incl = recur(curr - 1, sum - arr[curr], arr);
	excl = recur(curr - 1, sum, arr);
	return incl || excl;
}


bool DP1(int curr, int sum, vector<int> &arr, vector<vector<int>> &dp){
	if(curr == 0){
		return (sum == arr[0]);
	}
	if(dp[curr][sum] != -1){
		return dp[curr][sum];
	}
	bool incl = false , excl = false;
	if(sum >= arr[curr]) incl = DP1(curr - 1, sum - arr[curr], arr, dp);
	excl = DP1(curr - 1, sum, arr, dp);
	return dp[curr][sum] = incl || excl;
}

bool DP2(vector<int> &arr){

}

bool canPartition(vector<int> &arr, int n){	
	int sum = accumulate(begin(arr),end(arr),0LL);	

    // recursion ->
	// if(((sum & 1) ^ 1) == 1) {
	// 	bool flag = recur(arr.size()-1, sum/2, arr);
	// 	return flag;
	// }

	// DP1 ->
	// vector<vector<int>> dp(n, vector<int> (sum + 1, -1));
	// if(((sum & 1) ^ 1) == 1){
	// 	bool flag = DP1(arr.size()-1, sum/2, arr, dp);
	// 	return flag;
	// }

    // DP2
    
	return false;
}