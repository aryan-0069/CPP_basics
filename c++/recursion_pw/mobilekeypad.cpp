#include <iostream>
#include <vector>
using namespace std;

void f(string &str,int i,string result,vector <string> &vec,vector<string> &v){
    if(i==str.size()){
        vec.push_back(result);
        return ;
    }
    int digit=str[i]-'0';
    if(digit<=1){
        f(str,i+1,result,vec,v);
        return ;
    }
    for(int j=0;j<v[digit].size();j++){
        f(str,i+1,result+v[digit][j],vec,v);
    }
    return ;
}

int main(){
    vector<string> v(10);
    v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string str ="23";
    vector<string> vec;
    f(str,0,"",vec,v);
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}