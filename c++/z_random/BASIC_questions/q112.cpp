//112. Write a Java program to insert an element into the array list at the first position.

#include <bits/stdc++.h>
using namespace std;
int main(){


    vector<int> vec(4,1);
    //inserting 0 in begin
    auto it=vec.begin();
    vec.insert(it,0);

    for(auto i:vec){
        cout<<i<<" ";
    }
    return 0;
}