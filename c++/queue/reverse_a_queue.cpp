#include <bits/stdc++.h>
using namespace std;
                      
signed main(){
    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    //initial order = {1,2,3,4}
    

    //reversing queue using stack
    stack<int> st;
    while(!qu.empty()){
        st.push(qu.front());
        qu.pop();
    }

    //printing reversed queue
    while(!st.empty()){
        qu.push(st.top());
        st.pop();
    }
    while(!qu.empty()){
        cout<<qu.front()<<" ";
        qu.pop();
    }
    cout<<"\n";
    return 0;
}