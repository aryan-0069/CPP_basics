#include <bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr,int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i] <= pivot && i<= high-1){
            i++;
        }
        while(arr[j]>pivot && j>= low+1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;

}


void quicksort(vector<int> &arr,int low,int high){
    if(low < high){
        int pindex = partition(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
}
void prt(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    quicksort(v,0,n-1);
    cout<<"AFTER SORTING-> "<<endl;
    prt(v);


    return 0;
}