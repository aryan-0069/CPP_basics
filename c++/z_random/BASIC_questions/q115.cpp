//115. Write a Java program to search an element in a array list.


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

    cout<<"enter element - ";
    int ele,a=0;
    cin>>ele;
    for(auto it:vec){
        if(it==ele){
            a=1;
            break;
        }
    }
    if(a==1) cout<<"found";
    else cout<<"not found";
    return 0;
}