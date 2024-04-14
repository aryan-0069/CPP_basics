#include <bits/stdc++.h>
using namespace std;
int main(){
    deque <int> d;
    d.push_back(2); //pushses element from back
    d.push_front(1); //pushes element from front
    for(int ele:d){
        cout<<ele<<" ";
    }cout<<endl;
    // d.pop_back(); // to remove a element from back
    //d.pop_front(); //to remove a element from front
    cout<<"PRINT FIRST ELEMENT = "<<d.at(1)<<endl; //.at(index) prints the number present in deque

    cout<<"FRONT = "<<d.front()<<endl;
    cout<<"BACK = "<<d.back()<<endl;
    cout<<d.empty()<<endl; //checks whether deque is empty or not

    cout<<"before erase size = "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase size = "<<d.size()<<endl;
    return 0;
}