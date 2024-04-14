#include <bits/stdc++.h>
using namespace std;





/*given N , print the XOR of all nos between (1 to N) in O(1)
eg -> N=5 
output -> 1
*/

//just made a snippet "XORfrom1_n"
/*

given a range (L-R) print the xor L^(L+1)^(L+2)....^(R-1)^R
approach -> xor till of R - xor till l-1 ->0(1) solution

int XORfrom1_n(int &n){
    if(n%4==0){
        return n;
    }
    else if(n%4==1){
        return 1;
    }
    else if(n%2==2){
        return n+1;
    }
    return 0;
}
*/


signed main(){
    int n; cin>>n;
    if(n%4==0) cout<<n<<endl;
    else if(n%4==1) cout<<1<<endl;
    else if(n%4==2) cout<<n+1<<endl;
    else cout<<0<<endl;
    return 0;
}


