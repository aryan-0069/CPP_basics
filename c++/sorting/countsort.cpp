#include <bits/stdc++.h>
using namespace std;

//cant use count sort om floating number
//we can do countsort on negative nums -> we will have to subtract the smallest num(neg num) and then sort and then add the smallest num to the nums
void countsort(vector<int> &v){
    int max=INT_MIN;
    int n=v.size();
    //getting max element
    for(int i=0;i<n;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    vector<int> arr (max+1 , 0);
    for(int i=0;i<n;i++){
        arr[v[i]]++;
    }
  
    int i=0,j=0;
    while(i<max+1){
        if(arr[i]>0){
            v[j++]=i;
            arr[i]--;
        }
        else{
            i++;
        }
    }
    return;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    countsort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}