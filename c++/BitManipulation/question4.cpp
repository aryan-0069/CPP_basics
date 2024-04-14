// every integer appear twice , two integers appear once
// 1 1 2 2 3 4 4 5 6 6 -> 3 & 5 appear once , let them be x , y
// Q) find the two numbers whose freq is 1?

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,1,2,2,3,4,4,5,6,6};
    int XOR = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        XOR ^= arr[i];
    }
    int idx = 0;
    while(XOR>0){
        if(XOR & 1 == 1){
            break;
        }
        idx++;
        XOR = XOR >> 1;
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        int mask = (1 << idx);
        if((arr[i] & mask) != 0){
            x ^= arr[i];
        }
        else y ^= arr[i];
    }
    cout << x << " " << y << endl;
    return 0;
}  