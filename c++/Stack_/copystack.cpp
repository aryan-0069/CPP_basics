#include <bits/stdc++.h>
using namespace std;
                        
stack<int> copyStack(stack<int> &input){
    stack<int> temp;
    while(!input.empty()){
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }
    stack<int> ans;
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }
    return input;
}
  
int main(){
    stack<int> st;
    int n; cin>>n;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        st.push(x);
    }
    copyStack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}