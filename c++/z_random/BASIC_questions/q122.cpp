//122. Write a Java program to check whether a map contains key-value mappings (empty) or not.

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

    cout<<"enter key - ";
    string f;
    cin>>f;
    if(!m.empty()){
        auto it = m.find(f);
        if(it!=m.end()){
            cout<<"contains and have a value - "<<(*it).second<<endl;
        }
        else{
            cout<<"doesnt contain"<<endl;
        }
    }

    else cout<<"map empty";
    return 0;
}