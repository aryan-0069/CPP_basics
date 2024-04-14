#include <bits/stdc++.h>
using namespace std;
#define int int64_t

// constructor is called when a func in created

class Rectangle{
public:
    int l;
    int b;

    Rectangle(){ // default constructor - no  args passed
        l = 0;
        b = 0;
    }

    Rectangle(int x, int y){ // parametrized constructor - args passed
        l = x;
        b = y;
    }

    Rectangle(Rectangle &r){ // copy contructor - initialise an obj with another existing constructor
        l = r.l;
        b = r.b;
    }
};



signed main(){
    Rectangle r1; // default consttructor
    cout << r1.l << " " << r1.b << endl;

    Rectangle r2(2, 2); // to access parametrized contructor just pass the value which initializing
    cout << r2.l << " " << r2.b << endl;

    Rectangle r3 = r2; // value of r2 copied to r3
    cout << r3.l << " " << r3.b << endl;
    return 0;
}