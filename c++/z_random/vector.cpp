#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    cout<<v.back()<<" "<<v.front()<<endl;
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.push_back(1); 
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.push_back(5);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.resize(5);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.resize(10);
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    // v.pop_back();
 
    // cout<<"Size : "<<v.size()<<endl;
    // cout<<"Capacity : "<<v.capacity()<<endl;
    return 0;
} 