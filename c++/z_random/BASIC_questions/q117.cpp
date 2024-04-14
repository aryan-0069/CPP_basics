//117. Write a Java program to empty an array list.


#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec{1,2,3,4,5,6,7};
    cout<<"initial size - "<<vec.size()<<endl;
    vec.clear();
    cout<<"final size - "<<vec.size()<<endl;
    return 0;
}