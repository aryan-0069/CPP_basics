#include <bits/stdc++.h> 
using namespace std;

// using BOTTOM UP DP
long long DP2(vector<int> &arr){
    int n = arr.size();
    vector<long long> dp (n,-1);
    dp[0] = arr[0];
    for(int i=1;i<n;i++){
        if(i == 1){
            long long incl = arr[1];
            long long excl = dp[0];
            dp[i] = max(excl,incl);
        }
        else{
            long long incl = dp[i-2] + arr[i];
            long long excl = dp[i-1];
            dp[i] = max(incl,excl); 
        }
    }
    return dp[n-1];
}



// TOP DOWN DP
long long DP1(int curr,vector<int> &arr,vector<long long> &dp){
    int n = arr.size();
    if(curr == 0){
        return arr[0];
    }
    if(curr < 0){
        return 0;
    }
    if(dp[curr] != -1){
        return dp[curr];
    }
    long long incl = DP1(curr - 2,arr,dp) + arr[curr];
    long long excl = DP1(curr - 1,arr,dp);
    return dp[curr] = max(excl,incl);
}

// most optimized approach
long long opti(vector<int> &arr){
    int n = arr.size();
    long long prev1 = arr[0] , prev2 = 0;
    for(int i=1;i<n;i++){
        long long incl = arr[i];
        if(i >= 2) {
            incl += prev2;
        }
        long long excl = prev1;
        long long curr = max(incl,excl);
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1; 
}

long long int houseRobber(vector<int>& valueInHouse){
    if(valueInHouse.size() <= 2){
        return *max_element(valueInHouse.begin(),valueInHouse.end());
    }
    vector<int> arr;
    for(int i=0;i<valueInHouse.size()-1;i++){
        arr.push_back(valueInHouse[i]);
    }
    long long ans1 = opti(arr);
    vector<int> brr;
    for(int i=1;i<valueInHouse.size();i++){
        brr.push_back(valueInHouse[i]);
    }
    long long ans2 = opti(brr);
    return max(ans1,ans2);
}