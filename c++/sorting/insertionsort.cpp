#include <bits/stdc++.h>
using namespace std;



// void insertionSort(vector<int> & v){
//     int size=v.size();
//     for(int i=1;i<size;i++){
//         int current_ele=v[i];
//         int j=i-1;
//         while(j>=0 && v[j]>current_ele){
//             v[j+1]=v[j];
//                j--;
//         }
//         v[j+1]=current_ele;
//     }    
// }


void insertionSort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && v[j-1]>v[j]){
            swap(v[j],v[j-1]);
            j--;
        }
    }
}

 
int main(){
    int n;
    cin>>n;
    vector<int> v(n);    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    insertionSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i];
    }
    return 0;
}