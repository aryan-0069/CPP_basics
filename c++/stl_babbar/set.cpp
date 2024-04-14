#include <bits/stdc++.h>
using namespace std;
int main(){
    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(0);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    for(int ele:s){
        cout<<ele<<" ";
    }cout<<endl;

    s.erase(s.begin());
    for(int ele:s){
        cout<<ele<<" ";
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<" ";

    }cout<<endl;
    cout<<"-5 is present or not - "<<s.count(-5)<<endl;
    
    return 0;
}