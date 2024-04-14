#include <bits/stdc++.h>
using namespace std;


void printmap(map<int,string> &m){
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
//map works on trees

int main(){
    //map stores key value data types
    //maps are sorted
    map<int,string> m;
    m[1]="aryan";
    m[4]="yoichi";
    m[2]="hela";
    m[5]="bluelock";
    m.insert({10,"soccer"});
    m.insert(make_pair(7,"messi"));

    //making iterator to traverse the map
    // map<int,string> :: iterator it;
    // for(it=m.begin();it!=m.end();it++){
    //     cout<<(*it).first<<" "<<(*it).second<<endl;
    // }cout<<endl;

    // //using auto iterator
    // for(auto &pr:m){
    //     cout<<pr.first<<" "<<pr.second<<endl; 
    // }

    m.erase(5); //delete key value from map
    // m.clear();

    printmap(m);
    cout<<endl;

    auto it=m.find(4);
    if(it==m.end()){
        cout<<"no value";
    }
    else{
        cout<<(*it).first <<" "<<(*it).second<<endl;
    }
    // cout<<m[4];
    return 0; 
}