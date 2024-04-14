// 114. Write a Java program to remove the third element from an array list.



#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.emplace_back(x);
    }

    
    
    vec.erase(vec.begin()+3);

    for(auto it:vec){
        cout<<it<<" ";
    }
    return 0;
}