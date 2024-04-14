#include <iostream>
#include <vector>
using namespace std;

void f(string str,int i,string result,vector<string> &vec){
    if(i==str.length()){
        vec.push_back(result);
        return;
    }
    f(str,i+1,result+str[i],vec);
    f(str,i+1,result,vec);
}

int main(){
    string str="abcd";
    
    vector<string> vec; 
    f(str,0," ",vec);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}