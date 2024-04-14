//116. Write a Java program to reverse elements in an array list.


#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec{1,2,3,4,5};
    reverse(vec.begin(),vec.end());
    for(int ele:vec){
        cout<<ele<<" ";
    }
    return 0;
}