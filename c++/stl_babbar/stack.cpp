#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<string> s;
    s.push("aryan");
    s.push("hela");
    cout<<"size of stack - "<<s.size()<<endl;
    cout<<"top element - "<<s.top()<<endl;  // .top() prints the top element
    s.pop();
    cout<<"top element - "<<s.top()<<endl;  // .top() prints the top element
    cout<<"size of stack - "<<s.size()<<endl;
    return 0;
}