/*
GIVEN N strings , print unique strings in lexiographical order 
N<=10^5
|S|<=100000
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string h;
        cin>>h;
        s.insert(h);
    }

    for(auto it:s){
        cout<<it<<" ";
    }
    return 0;
}