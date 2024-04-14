#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<string> s; // basically same as set but additionally it can store duplicate values
    s.insert("aryan");
    s.insert("soccer");
    s.insert("bluelock");
    s.insert("aryan");
    auto it=s.find("aryan");

    //this erases only one occurence if multiple occurence present
    if(it!=s.end()){
        s.erase(it);
    }

    // s.erase("aryan"); // this erases all the occurence

    for(auto it:s){
        cout<<it<<" ";
    }
    return 0;
}