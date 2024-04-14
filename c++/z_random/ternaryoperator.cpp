#include <iostream>
using namespace std;

int main(){
    int marks;
    cin>>marks;
    // marks>33 ? cout<<"PASS"<<endl : cout<<"FAIL"<<endl;
    // string ans = (marks > 33) ? "PASS\n" : "FAIL\n";
    cout << (marks > 33 ? "YES" : "NO" ) << endl;
    return 0;
}