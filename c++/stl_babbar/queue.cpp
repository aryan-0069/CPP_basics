#include <bits/stdc++.h>
using namespace std;
int main(){
    queue <string> q;
    q.push("aryan");
    q.push("hela");
    cout<<"first eleement = "<<q.front()<<endl;
    q.pop();
    cout<<"first element = "<<q.front()<<endl;
    cout<<"SIZE - "<<q.size()<<endl;
    return 0;
}