#include <bits/stdc++.h>
using namespace std;
int main(){
    // suppose we a need to check if a number have set & unset bits in which indexes
    // we can just check by using this property
    // (a[i] & (1LL << j)) == 1 ? set : unset at j-th index
    

    // follow up , compute and store all elements of array have set & unsets bits in jth index 
    int n; cin >> n;
    vector<int> a(n);
    vector<int> cnt(30); // can be 32 , 64 as well , {this stores the set bits at jth index,for unset bits = n-cnt[j]}
    for(int i=0;i<n;++i){
        cin >> a[i];
        for(int j=0;j<30;++j){
            if(a[i] & (1LL << j)) cnt[j]++;
        }
    }


    
    // another approach
    /*
        int n; cin >> n;
        vector<int> a(n);
        vector<int> cnt(30); // this will contain how many set bits are there in that index across all element of array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            for (int j = 0; j < 30; j++) {
                cnt[j] += (a[i] >> j) & 1; // this also check if ith bit is set or not
            }
        }    
    */
    return 0;
}

