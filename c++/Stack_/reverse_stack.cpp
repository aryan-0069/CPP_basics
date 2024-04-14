#include <bits/stdc++.h>
using namespace std;

void reversestack(stack<int> &st){
    stack<int> temp1,temp2;
    while(st.size()!=0){
        int curr = st.top();
        st.pop();
        temp1.push(curr);
    }
    while(temp1.size()!=0){
        int curr = temp1.top();
        temp1.pop();
        temp2.push(curr);
    }
    while(temp2.size()!=0){
        int curr = temp2.top();
        temp2.pop();
        st.push(curr);
    }
    return ;
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    
    reversestack(st);
    while(st.size()!=0){
        cout<<st.top()<<endl;
        st.pop();
    }


    return 0;
}