#include<bits/stdc++.h>
using namespace std;


int main(){
    stack<char> st;
    string s;
    cin>>s;
    int n = s.size();
    int i=0;
    bool flag = true;
    while(n--){
        if(st.empty() && (s[i]=='}' || s[i]==')' || s[i]==']')){
            flag = false;
            break;
        }
        else if(!st.empty() && (s[i]=='}' || s[i]==')' || s[i]==']')){
            if(s[i]==')' && st.top()=='('){
                st.pop();
                i++;
            }
            else if(s[i]=='}' && st.top()=='{'){
                st.pop();
                i++;
            }
            else if(s[i]==']' && st.top()=='['){
                st.pop();
                i++;
            }
            else{
                flag= false;
                break;
            }
        }
        else if(s[i]=='{' || s[i]=='(' ||s[i]=='['){
            st.push(s[i]);
            i++;
        }
    }
    if(st.size()==0 && flag ==true){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

    return 0;
}