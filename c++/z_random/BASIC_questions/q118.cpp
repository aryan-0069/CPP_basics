//118. Write a Java program to replace the second element of an ArrayList with the specified element.


#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec{1,2,3,4,5};
    int ele;
    cin>>ele;
    vec[1]=ele;
    for(auto it:vec){
        cout<<it<<" ";
    }
    return 0;
}