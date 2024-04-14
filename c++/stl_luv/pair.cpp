#include <bits/stdc++.h>
using namespace std;
int main(){
    //pair is used to carry a relation    
    pair<int,string> p; //pair is defined by this , we can take any two data-type
    
    //two ways to initialize pair
    p=make_pair(2,"aryan");
    p={2,"hela"}; 

    pair<int,string> &p1=p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;

    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
}