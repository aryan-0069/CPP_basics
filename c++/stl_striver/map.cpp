#include <bits/stdc++.h>
using namespace std;
int main(){
    //keys cant be same but value can be
    //key value 
    //raj->27
    //hima->31
    //sand->67
    //tank->89
    
    map<string,int>mpp;  //map is always according to keys

    mpp["raj"]=27;
    mpp["hima"]=31;
    mpp["sand"]=67;
    mpp["tank"]=89;
    mpp["hima"]=30; //it overwrite
    mpp.emplace("raj",45); //same
    mpp.erase("raj"); //delete key value , mpp.erase(key)
    mpp.clear(); //clear the whole map 
    mpp.erase(mpp.begin(),mpp.end());

    auto it=mpp.find("raj"); //points at raj
    auto it = mpp.find("simran") ; //points at mpp.end() as she does not exist 

    //if a map is empty or not
    if(mpp.empty()){
        cout<<"YES MAP IS EMPTY";
    }

    mpp.count("raj"); //always return 1
    //printing a map
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    for(auto it=mpp.begin();it!=mpp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
        cout<<(*it).first<<" "<<(*it).second<<endl; //both ways allowed
    }



    //unordered_map->does not store in any order

    unordered_map<int,string> um;
    //unordered_map<pair<int,int>,string> um;  -> wrong , unordered_map can only store single keys
    //to store pair use map
    //o(1) is most cases
    //o(n) in worst cases where n is size of container





    //multimap
    multimap<string,int> mp;
    //store multiple keys if value are diff. 
    //stores in sorted order


    mp.emplace("aryan",9);
    mp.emplace("aryan",23); 











    return 0;
}