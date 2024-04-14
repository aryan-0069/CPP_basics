//110. Write a Java program to create an array list, add some colors (strings) and print out the collection.

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> vec;
    int n; //number of colours
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vec.emplace_back(s);
    }

    for(auto i:vec){
        cout<<i<<" ";
    }
    return 0;
}