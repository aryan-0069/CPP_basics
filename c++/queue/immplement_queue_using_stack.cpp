#include <bits/stdc++.h>
using namespace std;

//push efficient

class Queue {
    stack<int> st;
public:
    Queue(){}

    void push(int x){
        /*
        **TC -> 0(1)
        */
        this->st.push(x);
    }

    void pop(){
        /*
        **TC -> 0(n)
        */
        if(this->st.empty()) return;
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        st.pop();
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
    }

    bool empty(){
        return this->st.empty();
    }

    int front(){
        /*
        **TC -> 0(n)
        */
        if(this->st.empty()) return -1;
        stack<int> temp;
        while(this->st.size()>1){
            temp.push(st.top());
            st.pop();
        }
        int result = st.top();
        while(!temp.empty()){
            this->st.push(temp.top());
            temp.pop();
        }
        return result;
    }

};


int main(){
    Queue dq;
    dq.push(10);
    dq.push(20);
    dq.push(30);
    while(!dq.empty()){
        cout<<dq.front()<<" ";
        dq.pop();
    }
    return 0;
}