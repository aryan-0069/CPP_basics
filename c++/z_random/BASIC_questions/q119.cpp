//119. Write a Java program to print all the elements of an ArrayList using the elements' position.


#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec(5,10);
    for(auto i:vec){
        cout<<i<<" ";
    }

    return 0;
}