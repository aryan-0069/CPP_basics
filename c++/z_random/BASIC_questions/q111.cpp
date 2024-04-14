// 111. Write a Java program to iterate through all elements in an array list.

#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec(5,10);
    
    for(int i=0;i<vec.size();i++){
        
        cout<<vec[i]<<" ";
    }

    // for(auto i:vec){
    //     cout<<i<<" ";
    // }
    return 0;
}