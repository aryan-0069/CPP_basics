#include <bits/stdc++.h>
using namespace std;
//if you want to swap then return false , otherwise return true -> for stl sort function

/*
//naive approach
bool cmp(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first){
        //naive way
        if(a.first>b.first) return false; // sort vec.first in ascending order
        else return true;
    }
    else{
        if(a.second<b.second) return false; // if vec.first is equal sort the vec.second in descending order
        else return true;
    }
}
*/


//better approach -> just return in whatever format you need 
//this cmp makes the sort ascending by first value and descending by second value
bool cmp(pair<int,int> a,pair<int,int> b){ 
    if(a.first!=b.first){
        return a.first<b.first;
    }
    return a.second>b.second;
}


signed main(){
    vector<pair<int,int>> vec={{1,2},{3,4},{1,10},{2,20},{100,0}};
    sort(vec.begin(),vec.end(),cmp);
    for(auto it:vec){
        cout<<it.first<<" "<<it.second<<endl;
    }
    return 0;
}


//for normal descending order in int array 
/*
bool cmp(int a,int b){
    return a>b;
}
*/