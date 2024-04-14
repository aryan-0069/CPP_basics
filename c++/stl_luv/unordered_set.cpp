#include <bits/stdc++.h>
using namespace std;

/*
GIVEN N strins and Q QUERIES 
in each query you are given a string 
print yes if string is present
else print no.
*/
int main(){
    //ordered_set stores only key -> stores unique element in unsorted order
    unordered_set<string> us; //faster than set 

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        us.insert(s);
    }
    int q;
    cin>>q;
    while(q>0){
        string str;
        cin>>str;
        if(us.find(str)==us.end()){
            cout<<"no"<<endl;
        }
        else{
            cout<<"string is present"<<endl;
        }
        q--;
    }



    return 0;
}