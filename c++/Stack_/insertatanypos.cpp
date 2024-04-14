#include <bits/stdc++.h>
using namespace std;


void insertatposition(stack<int> &st,int x,int pos){
    stack<int> temp;
    int sz = st.size()-pos;
    while(sz--){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
    return;
}   // 1 2 3 4

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    
    int x,pos; cin>>pos>>x;
    insertatposition(st,x,pos);

    //output
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


    return 0;
}