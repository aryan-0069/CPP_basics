#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum =0;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    int ans = INT_MAX;
    for(int i=k;i<n;i++){
        sum=sum+a[i]-a[i-k];
        ans=min(sum,ans);
    }
    cout<<ans<<endl;
    return 0;
}