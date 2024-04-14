#include <bits/stdc++.h>
using namespace std;
#define int int64_t

//dp1 -> top down approach
//dp2 -> bottom up approach
//opti -> most optimized approach



//APPROACH 1 -> USING RECURSION
int fiboRecur(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fiboRecur(n - 1) + fiboRecur(n - 2);
}


//APPROACH 2 -> USING TOP-DOWN DP
int fibodp1(int n,vector<int> &dp){
    if(n == 0 || n == 1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    return dp[n] = fibodp1(n-1,dp) + fibodp1(n-2,dp);
}

//APPROACH 3 -> USING BOTTOM-UP APPROACH
int fibodp2(int n,vector<int> &dp){
    dp[0] = 0 , dp[1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}


//APPROACH 4 -> USING MOST OPTIMIZED APPROACH
int opti(int n){
    if(n == 0 || n == 1){
        return n;
    }
    int a = 0 , b = 1, c;
    for(int i=2;i<=n;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


signed main(){
    int n; cin >> n;
    
    return 0;
}

