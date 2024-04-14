#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    //for loop
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        v.push_back(element);
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    //for each loop
    for(int ele:v){
        cout<<ele<<" ";
    }
    cout<<endl;

    //inserting a new element
    v.insert(v.begin()+2,6);

    
    //while loop
    int i=0;
    while(i<5){
        cout<<v[i]<<" ";
        i++;
    }
    return 0;
}