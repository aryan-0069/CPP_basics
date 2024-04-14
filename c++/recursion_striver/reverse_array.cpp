#include <bits/stdc++.h>
using namespace std;


void reverseArray(int arr[],int index,int size){
    if(index >= (size/2)){
        return;
    }
    swap(arr[index],arr[size-index-1]);
    reverseArray(arr, index+1, size);
} 


int main(){
    int arr[] = {2, 3, 5, 1, 7, 0};
    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;
    int n = 6;
    reverseArray(arr,0,n);
    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}