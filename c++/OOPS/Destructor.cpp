#include <bits/stdc++.h>
using namespace std;
#define int int64_t

// destructor is called when a func in deleted

class Rectangle{
public:
    int l;
    int b;

    Rectangle(){ // default constructor - no  args passed
        l = 0;
        b = 0;
    }

    ~Rectangle(){
        cout << "Destructor is called" << endl;
    }
};


signed main(){
    // destructor can only be called on pointer
    Rectangle *r1 = new Rectangle();
    cout << r1->l << " " << r1->b << endl;
    delete r1; // we can use delete function now

    return 0;
}