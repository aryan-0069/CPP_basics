#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    for(pair<int,int>&p:v_p){
        cout<<p.first<<" "<<p.second<<endl;
    }cout<<endl;

    //to avoid writing so much we use auto keyword which automatically determines datatypes for variables
    for(auto &p:v_p){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}