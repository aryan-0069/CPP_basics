#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,set<string>>m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int marks;
        string name;
        cin>>name>>marks;
        m[marks].insert(name);
    }cout<<endl;

    auto it=--m.end();
    while(true){
        auto &students=(*it).second;
        int num=(*it).first;
        for(auto student:students){
            cout<<student<<" "<<num<<endl;;
        }
        if(it==m.begin()) break;
        it--;

    }
    return 0;
}