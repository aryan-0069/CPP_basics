//fibonacci series with dp

#include <bits/stdc++.h>
using namespace std;


int fibo(int n,vector<int> &dp){
    if(n == 0 || n == 1){
        return n;
    }
    if(dp[n] != -1){
        return dp[n];
    }
    int ans = fibo(n-1,dp) + fibo(n-2,dp);
    dp[n] = ans;
    return ans;
}
                      
int main(){
    clock_t start, end;
    start = clock();

    int n; cin >> n;
    vector<int> dp(n+1,-1);
    dp[0] = 0, dp[1] = 1;
    int term = fibo(n,dp);
    // cout << term << endl;

    for(auto it:dp){
        cout << it << " ";
    }

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;


    return 0;
}



