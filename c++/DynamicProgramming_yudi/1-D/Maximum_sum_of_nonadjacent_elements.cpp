// problem link = https://www.codingninjas.com/studio/problems/maximum-sum-of-non-adjacent-elements_843261

#include <bits/stdc++.h>
using namespace std;


#define size(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define int int64_t
#define countbits(x) __builtin_popcountll(x)
#define debug(x) cout << #x <<" "<< x << endl;


//USING RECURSION 
int recur(int curr,vector<int> &arr){
    if(curr == 0){
        return arr[0];
    }
    if(curr < 0){
        return 0;
    }
    int incl = recur(curr - 2,arr) + arr[curr];
    int excl = recur(curr - 1,arr);
    return max(incl,excl);
}


// USING TOP DOWN DP
int DP1(int curr,vector<int> &arr,vector<int> &dp){
    if(curr == 0){
        return arr[0];
    }
    if(curr < 0){
        return 0;
    }
    if(dp[curr] != -1){
        return dp[curr];
    }
    int incl = DP1(curr - 2,arr,dp) + arr[curr];
    int excl = DP1(curr - 1,arr,dp);

    return dp[curr] = max(incl,excl);
}



//USING BOTTOM UP DP - i) yudi bhaiya's approach
int DP2(vector<int> &arr){
    int n = size(arr);
    vector<int> dp(n+1,0);
    dp[0] = arr[0];
    for(int curr=1; curr<n; curr++) {
        int incl = 0;
        if(curr - 2 >= 0) {
            incl = dp[curr - 2] + arr[curr];
        }
        int excl = dp[curr - 1];
        dp[curr] = max(incl,excl);
    }
    return dp[n - 1];
}

//USING BOTTOM UP DP - ii) aryan's approach
int DP2(vector<int> &arr){
    int n = size(arr);
    vector<int> dp(n+1,0);
    dp[0] = arr[0];
    for(int i=1;i<n;i++){
        if(i == 1){
            int incl = arr[i];
            int excl = dp[i-1]; 
            dp[i] = max(incl,excl);
            continue;
        }
        else{
            int incl = dp[i-2] + arr[i];
            int excl = dp[i-1];
            dp[i] = max(incl,excl);
        }
    }
    return dp[n-1]; 
}


//USING MOST OPTIMIZED
int opti(vector<int> &arr){
    int n = size(arr);
    int prev1 = 0 , prev2 = 0;
    for(int i=1;i<n;i++){
        int incl = arr[i];
        if(i - 2 >= 0) {
            incl += arr[i];
        }
        int excl = dp[i - 1];
        dp[i] = max(incl,excl);
    }
    return ; 
}

void solve(){
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &i:arr) cin >> i;
    // cout << recur(n-1,arr) << endl;

    // vector<int> dp(n+1,-1);
    // cout << DP1(n-1,arr,dp) << endl;
    cout << DP2(arr) << endl;
}
                        
signed main(){
    int testcases=1;
    cin>>testcases;   /* comment if no testcases */
    while(testcases--){
        solve();
    }
    return 0;
}