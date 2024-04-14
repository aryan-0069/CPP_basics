//evrey integer occurs twice in array except one integer, print that integer 
//as xor is a commutative prop. -> a^b^c = b^c^a = c^b^a 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,1,2,2,3,3,4,4,5};
    int XOR=0;
    for(int i=0;i<9;i++){
        XOR=XOR^arr[i];
    }
    cout<<XOR;
    return 0;
}