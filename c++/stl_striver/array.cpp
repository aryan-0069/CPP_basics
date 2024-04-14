#include <bits/stdc++.h>
using namespace std;

//max size of array = 10^7 -> int,double,char
int array1[10000000];


 //max size of array = 10^8-> bool
    int array1[100000000];


int main(){
    //max size of array = 10^6-> int,double,char
    int array1[1000000];


    //max size of array = 10^7-> bool
    int array1[10000000];


    array<int,5> arr={1,2,3};

    int arr1[22]={0}; //all element 0 coz first ele defined zero and rest is given zero
    array<int,5>arr2;
    arr2.fill(10); //makes all element 10 , .fill() only work if array defined like this array<int ,size> arr; 

    // arr.at(index); -. return the value at index

    //iterators
    //begin(),end(),rbegin(),rend()

    array<int,5>arr3={1,2,3,4,5};
    for(auto it=arr3.begin();it!=arr3.end();it++){
        cout<<(*it)<<" ";
    }cout<<endl;

    for(auto it = arr3.rbegin();it!=arr3.rend();it++){
        cout<<(*it)<<" ";
    }cout<<endl;

    for(auto it = arr3.end()-1;it>=arr3.begin();it--){
        cout<<(*it)<<" ";
    }cout<<endl;

    arr3.size();  //prints size
    arr3.front(); //arr3.at(0)
    arr3.back(); //arr3.at(rbegin());



    return 0;
}