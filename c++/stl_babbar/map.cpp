#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int,string> m;
    m[1]="aryan";
    m[2]="hela";
    m[24]="hero";
    m.insert({5,"bluelock"});

    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13 -> "<<m.count(13)<<endl;
    m.erase(24);
    cout<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    return 0;
}