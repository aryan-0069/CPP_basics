#include <bits/stdc++.h>
using namespace std;

//always prefer unordered map over ordered map if sorting is not required becuase unordered map takes very little time hence very effective
//unordered map work on hash func
void printmap(unordered_map<int,string> &m){
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}


int main(){
    unordered_map<int,string> m;
    m[1]="aryan";
    m[4]="yoichi";
    m[2]="hela";
    m[5]="bluelock";
    m.insert({10,"soccer"});
    m.insert(make_pair(7,"messi"));
    printmap(m);
    return 0;
}