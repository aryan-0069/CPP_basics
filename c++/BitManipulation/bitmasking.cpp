#include <bits/stdc++.h>
using namespace std;
#define int int64_t

/*
    Make a set data structure , addn & removal in set take O(logn) time 
    Do it in TC=O(1) and SC=O(1) 
    Only applicable for x<=63 (constraints) -> input number ka raneg (i.e arr[i]<=63) 
    very important for dp
*/

void removal(int &mask,int num){
    mask &= ~(1 << num);
    return;
}

void add(int &mask,int num){
    mask |= (1 << num);
    return;    
}

signed main(){
    int mask = 0;
    int n; cin>>n; // no. of operations
    for(int i=0;i<n;i++){
        char ch; cin >> ch; //A for addn , D for removal
        int num; cin >> num;
        if(ch == 'A'){
            add(mask,num);
        }
        else if(ch == 'D'){
            removal(mask,num);
        }
    }
    bitset<64> binary(mask);
    string s = binary.to_string();
    int cnt = 0;
    for(auto it:s){
        if(it == '1'){
            cout << 63 - cnt << endl;  
        }
        cnt ++;
    }
    return 0;
}