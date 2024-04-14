// https://www.codechef.com/COOK126B/problems/PTUPLES
// a very nice problem
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
                      

const int N = 1e6; 

vector<bool> isPrime(N+1,true);
vector<int> ans(N+1, 0);


void sieve(){
    isPrime[0] = isPrime[1] = false;
    for(int i=2;i*i<=N;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=N;j+=i){
                isPrime[j] = false;
            }
        }
    }

    for(int i=2;i<=1e6;i++){
        ans[i] = ans[i-1];
        if(isPrime[i] && isPrime[i-2]){
            ans[i]++;
        }
    }

}


signed main(){
    int T; cin >> T;
    sieve();
    while(T--){
        int n; cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}