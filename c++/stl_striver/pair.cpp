#include <bits/stdc++.h>
using namespace std;
int main(){


    //pair

    pair<int,int>pr={1,2};
    pair<pair<int,int>,int>pr1={{1,2},4};
    cout<<pr1.first.second<<endl;  //->2

    pair<pair<int,int>,pair<int,int>>pr2={{1,2},{3,4}};
    cout<<pr2.first.first<<endl;  //-> 1
    cout<<pr2.second.second<<endl; //-> 4

    //pair is single element , map is container which store pair 

    vector<pair<int,int>> vec;
    map<pair<int,int>,int> m;
    set<pair<int,int>> st; 




    return 0;
}