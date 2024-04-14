#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v(5,"aryan");
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;


    //copying a vector
    vector<string> &v1=v;
    for(int i=0;i<v1.size();i++){ 
        cout<<v1[i]<<" ";
    }cout<<endl;


    //inputing a vector
    vector<string> vec(5);

    for(int i=0;i<5;i++){
        string s;
        cin>>s;
        vec.push_back(s);
    }cout<<endl;

    for(string i:vec){
        cout<<i<<" ";
    }
    return 0;
}