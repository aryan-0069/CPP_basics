//121. Write a Java program to associate the specified value with the specified key in a HashMap.


#include <bits/stdc++.h>
using namespace std;
int main(){


    map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        string s;
        cin>>s>>x;
        m.emplace(s,x);
    }cout<<endl;
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}