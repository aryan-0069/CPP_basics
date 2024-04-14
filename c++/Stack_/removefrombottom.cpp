#include <bits/stdc++.h>
using namespace std;


void removeatbottom(stack<int> &st){
    //tc -> 0(N) , sc->0(N)
    stack<int> temp;
    int sz = st .size();
    sz--;
    while(sz--){
        int curr = st.top();
        st.pop();
        temp.push(curr);
    }
    st.pop();
    while(!temp.empty()){
        int curr = temp.top();
        temp.pop();
        st.push(curr);
    }
    return;
}

int main(){
    stack<int> st;
    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    removeatbottom(st);

    cout<<"AFTER - "<<endl;
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


    return 0;
}