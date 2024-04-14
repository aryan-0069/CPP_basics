#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v={{1,2},{2,3},{3,4},{4,5}};
    for(int i =0;i<v.size();i++){
        cout<<endl;
        cout<<v[i].first<<" "<<v[i].second;
    }cout<<endl;


    vector<pair<int,int>>v1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v1.push_back({x,y});
        // v1.push_back(make_pair(x,y));

    }
    for(int i =0;i<v1.size();i++){
        cout<<endl;
        cout<<v1[i].first<<" "<<v1[i].second;
    }cout<<endl;

    return 0;
}