#include <bits/stdc++.h>
using namespace std;
// we use it on array where there is disparity in element

void countsort(vector<int> &v,int pos){
    int n=v.size();

    //create freq array
    vector<int> freq(10,0);
    for(int i=0;i<n;i++){
        freq[(v[i]/pos)%10]++;
    }

    //cumulative frequency
    for(int i=1;i<10;i++){
        freq[i]+=freq[i-1];
    }

    //ans array
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[(v[i]/pos)%10]]=v[i];
    }

    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
    // return;
}


void radixsort(vector<int> &v){
    int maxi=INT_MIN;
    for(auto i:v){
        maxi=max(i,maxi);
    }

    for(int pos=1;maxi/pos>0;pos*=10){
        countsort(v,pos);
    }
    // return;
}

int main(){

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    radixsort(v);

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }


    return 0;
}