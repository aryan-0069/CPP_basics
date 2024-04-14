#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec; //initialising vector without size 
    cout<<"capacity="<<vec.capacity()<<endl;
    vec.push_back(10);
    cout<<"capacity="<<vec.capacity()<<endl;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    cout<<"capacity="<<vec.capacity()<<endl;
    cout<<"size="<<vec.size()<<endl;

    cout<<"element at 2nd pos = "<<vec.at(2)<<endl;

    cout<<"front element = "<<vec.front()<<endl;
    cout<<"back element = "<<vec.back()<<endl;

    cout<<"before pop - "<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }cout<<endl;
    vec.pop_back();
    cout<<"after pop - "<<endl;
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl<<"before size="<<vec.size()<<endl;
    cout<<"before capacity="<<vec.capacity()<<endl;
    vec.clear(); //clears the whole vector
    cout<<endl<<"after size="<<vec.size()<<endl;
    cout<<"after capacity="<<vec.capacity()<<endl;


    vector<int> a (5,1); //initialising vector with size 5 and values 1

    for(int ele:a){
        cout<<ele<<" ";
    }cout<<endl;

    vector <int> last(a); //copying a vector
    for(int ele:last){
        cout<<ele<<" ";
    }
    return 0;
}