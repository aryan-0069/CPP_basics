// 113. Write a Java program to retrieve an element (at a specified index) from a given array list.


#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        vec.emplace_back(x);
    }

    int pos;
    cin>>pos;
    
    vec.erase(vec.begin()+pos);

    for(auto it:vec){
        cout<<it<<" ";
    }


    return 0;
}