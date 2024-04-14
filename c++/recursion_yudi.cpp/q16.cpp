//Q) reverse an array

#include <bits/stdc++.h>
using namespace std;

// parametrized
void reverseArray(int arr[],int index,int size){
    if(index >= size/2){
        return;
    }
    swap(arr[index],arr[size - index - 1]);
    reverseArray(arr,index+1,size);
}




int main(){
    int array[] = {1,2,3,4,5};
    reverseArray(array,0,5);
    for(auto it:array){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}