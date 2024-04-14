#include <bits/stdc++.h>
using namespace std;
int main(){



    //comparator
    bool comp(int el1,int el2){
        if(el1<=el2){
            return true;
        }
        return false;


    }







    int n=3;
    int arr[n];
    sort(arr,arr+n); //sorts everything in ascending order
    sort(arr,arr+n,comp);//descedning order sorting
    sort(arr,arr+n, greater<int>); //descending order sortting inbuilt stl 




    return 0;
}