#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++){
            long long candy_ct;
            cin>>candy_ct;
            bags.insert(candy_ct);
        }
        long long total_candy=0;
        for(int i=0;i<k;i++){
            auto it = --bags.end();
            long long candy=(*it);
            total_candy+=candy;
            bags.erase(*it);
            bags.insert(candy/2);
        }
        cout<<total_candy<<endl;
    }

    return 0;
}