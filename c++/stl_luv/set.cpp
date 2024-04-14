#include <bits/stdc++.h>
using namespace std;


void printtt(set<string> &s){

    //foreach loop is more preferred
    for(auto &it:s){
        cout<<it<<" ";
    }cout<<endl;

    // for(auto it = s.begin();it!=s.end();it++){
    //     cout<<(*it)<<" ";
    // }
}
int main(){
    //set stores only key -> stores unique element in sorted order . cant use complicated class like vector<vector<int>>
    set<string> s; 
    s.insert("aryan");
    s.insert("soccer");
    s.insert("bluesky");
    auto it=s.find("aryan"); // to access key find() is used
    ///erase a element from set
    if(it!=s.end()){
        s.erase(it);
    }
    s.erase("soccer");
    printtt(s);

    return 0;
}