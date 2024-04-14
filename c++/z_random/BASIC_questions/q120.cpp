//120. Write a Java program to get the number of elements in a hash set.


#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.emplace(x);
    }

    cout<<"size - "<<s.size();
    return 0;
}