#include <bits/stdc++.h>
using namespace std;
int main(){
    //stack

    stack<int> st; //lifo ds

    //top
    //size
    //top
    //empty
    //push and emplace

    st.push(1); //emplace
    st.push(7);
    st.push(0);
    st.push(3);

    cout<<st.top()<<endl; // ->3
    st.pop(); //3 out
    cout<<st.top()<<endl; // ->0

    //delete the entire stack as we dont have clear func
    while(!st.empty()){
        st.pop();
    }


    //no of eleement in the stack
    st.size();


    stack<int> s1;
    s1.top(); //returns error as stack is empty(underflow)

    //always check if stack is emoty or not beforehand in cp
    if(!s1.empty()){
        cout<<s1.top()<<endl; 
    }




    //queue-fifo operation ds
    //top
    //size
    //front
    //empty
    //push and emplace


    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout<<q.front()<<endl; //print 1
    q.pop();
    cout<<q.front()<<endl; //print 2

    //deleting whole queue
    while(!q.empty()){
        q.pop();
    }

    queue<int>q;
    //inputing a queue
    for(int i=0;i<10;i++){
        q.push(i);
    }






    //priority queue ->stroe all in sorted order -> max element at the top (descending order) ...

    //push
    //size
    //top pop empty

    priority_queue<int> pq;

    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);

    cout<<pq.top(); //prints 6
    pq.pop();
    cout<<pq.top(); //prints 5

    //if we want to print in ascending order
    // we can tske input in negative term and then cout them mul with -1

    priority_queue<int> p;

    p.push(-1);
    p.push(-5);
    p.push(-2);
    p.push(-6);

    cout<<-1*p.top()<<endl; //prints 1

    //min priority queue is ->ascending order priority queue
    priority_queue<int,vector<int>,greater <int>> pq;
    pq.push(1);
    pq.push(5);
    pq.push(2);
    pq.push(6);

    cout<<pq.top()<<endl;  //prints 1






























    return 0;
}