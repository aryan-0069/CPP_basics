#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4};
    for(int i=0;i<4;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it=v.begin(); //iterators are same as pointer ,, its a pointer for stl 
    cout<<"FIRST ELEMENT - "<<(*it)<<endl;
    cout<<"SECOND ELEMENT - "<<(*(it+1))<<endl;

    for(it=v.begin();it<v.end();it++){
        cout<<*(it)<<" ";
    }cout<<endl;

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
    vector<pair<int,int>> :: iterator it1;

    for(it1 = v_p.begin() ; it1!=v_p.end() ; it1++){
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
        // cout<<(it1->first)<<" "<<(it1->second)<<endl; //only for pair this way of first , second is used
    }

    //(*it).first<=>it->first

    return 0;
}