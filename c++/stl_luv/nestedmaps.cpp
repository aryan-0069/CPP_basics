#include <bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string,string>,vector<int>>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string fn,ln;
        int ct;
        cin>>fn>>ln>>ct;
        for(int j=0;j<ct;j++){
            int x;
            cin>>x;
            m[{fn,ln}].push_back(x);
        }
    }
    for(auto &it:m){
        auto &name=it.first;
        auto &list=it.second; 
        cout<<name.first<<" "<<name.second<<endl;
        cout<<"size - "<<list.size()<<endl;
        for(auto &ele:list){
            cout<<ele<<" ";
        }cout<<endl;
    }
    return 0;
}