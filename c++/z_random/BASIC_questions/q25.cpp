//25. Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && a==c){
        cout<<"EQUILATERAL TRAINGLE";
    }
    else if(a==b || a==c || b==c){
        cout<<"ISOCELES TRAINGLE";
    }
    else{
        cout<<"scalene traingle";
    }
    return 0;
}