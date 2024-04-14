//Find the factorial of a given number. factorial of 5 is -> 5 * 4 * 3 * 2 * 1 -> 120.

#include <bits/stdc++.h>
using namespace std;
int main(){
    int num=5;
    int fact=1;
    for(int i=num;i>0;i--){
        fact=fact*i;
    }
    cout<<"FACTORIAL = "<<fact;
    return 0;

}