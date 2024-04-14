#include <bits/stdc++.h>
using namespace std;
#define int int64_t
/*
class class_name{
    type data1;
    type data2;
};
*/


class Fruit{
public:
    string name;
    string color;
};


class Student{
    string name;
    int rollno;
};


signed main(){
    Fruit apple; // object of type fruit
    apple.name = "Apple";
    apple.color = "Red";

    cout << apple.name << " " << apple.color << endl;

    // another way 
    Fruit *mango = new Fruit(); // pointer which point to object mango object 
    mango->name = "Mango";
    mango->color = "Yellow";
    cout << mango->name << " " << mango->color << endl;


    return 0;
}