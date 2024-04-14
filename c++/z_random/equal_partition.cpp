#include <iostream>
#include <vector>
using namespace std;

void equalPartition(vector <int> &v){
    int storer=0;
    for(int i=1;i<v.size();i++){
        storer=storer+v[i];
    }
    int val=v[0];
    for(int i=0;i<v.size();i++){
        if(val==storer){
            cout<<i<<"  ";
            storer=storer - v[i+1];
            val=val+v[i+1];
        }
        else if(val!=storer){
            storer=storer - v[i+1];
            val=val+v[i+1];
        }
        else{
            cout<<"no equal partition found";
        }
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector <int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    } 
    equalPartition(v);
    return 0;
}