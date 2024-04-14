#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4};
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    //pass by refernce saves us time as its avoid passing a copy to loop

    //foreach loop
    for(int &i:v){
        i++;
        //cout<<i<<" "; 
    }cout<<endl;

    //as we passed by refernce the value got updated even in foreach loop
    for(int i:v){
        
        cout<<i<<" "; 
    }cout<<endl;

    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4},{4,5}};
    //passed by refernce to update value
    for(pair<int,int>&p:v_p){
        ++p.first;
        ++p.second;
    }

    for(pair<int,int>p:v_p){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}