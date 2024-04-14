#include <bits/stdc++.h>
using namespace std;

//aproach 1 -> TC = 0(number of bits || position of MSB) 
int solve1(int &a){
    // int a = 14 ;
    // cin>>a;
    int counter =0;
    while(a!=0){
        if(a&1==1){
            counter++;
        }
        a=a>>1;
    }
    return counter; 
}


//approach 2 -> TC = 0(number of bits || position of MSB) {alternate version of first approach}
int solve2(int &a){
    bitset<32> binary(a);
    string s = binary.to_string();
    int counter = 0;
    for(auto it:s){
        if(it == '1'){
            counter++;
        }
    }
    return counter;
}



//approach 3 -> TC = 0(number of set bits) <slightly optimal in certain testcases>
int solve3(int &a){
    int counter = 0;
    while(a!=0){
        a = a & (a-1);
        counter++;
    }
    return counter;
}


//approach 4 -> TC = 0(log2(n))
int solve4 (int &a){
    return __builtin_popcount(a);
}


int main(){
    int a; cin>>a;
    int temp1 = a , temp2 = a , temp3 = a , temp4 = a;
    cout << solve1(temp1) <<endl;
    cout << solve2(temp2) <<endl;
    cout << solve3(temp3) <<endl;
    cout << solve4(temp4) <<endl;
    return 0;
}