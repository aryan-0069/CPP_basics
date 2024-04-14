#include <bits/stdc++.h>
using namespace std;


#define size(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define int int64_t
#define countbits(x) __builtin_popcountll(x)
#define debug(x) cout << #x <<" "<< x << endl;


void solve(){
    int n; cin >> n;
    vector<int> arr(2*n);
    for(int i=0;i<2*n;i++) cin >> arr[i];
    sort(all(arr));
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        vp.push_back({arr[i],arr[i+n]});
    }
    int sum = 0;
    for(int i=0;i<size(vp)-1;i++){
        sum += abs(vp[i].first - vp[i+1].first) + abs(vp[i].second - vp[i+1].second);
    }
    cout << sum << endl;
    for(auto it:vp){
        cout << it.first << " " << it.second << endl;
    }
    return;
}
                        
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(15); 
    //cout.setf(ios::fixed);

    int testcases=1;
    cin>>testcases;   /* comment if no testcases */
    while(testcases--){
        solve();
    }
    return 0;
}