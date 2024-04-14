#include <bits/stdc++.h>
using namespace std;


#define size(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()


void solve(){
    int n; cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        arr[i]={x,i+1};
    }
    sort(all(arr),[&](pair<int, int> x,pair<int, int> y) {
        return x.first < y.first;
    });
    for(auto it:arr){
        cout<<it.second<<" ";
    }
    return;
}


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(15);               
    int testcases=1;
    // cin>>testcases;
    while(testcases--){
        solve();
    }
    return 0;
}