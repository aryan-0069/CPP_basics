#include <bits/stdc++.h>
using namespace std;


void insertatbottom(stack<int> &st,int x){
    //tc -> 0(N) , sc->0(N)
    stack<int> temp;
    while(!st.empty()){
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
}

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    //basically the ideas behind this is to empty the stack and store its value in another stack and then push the number
    //in the stack and the push all the previous numbers in stack
    int x; cin>>x;
    insertatbottom(st,x);

    //output
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


    return 0;
}