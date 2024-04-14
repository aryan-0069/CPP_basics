//given an array of names of fruits ; you are supposed to sort it in lexographical order 
//eg. ["papaya","lime","watermelon","apple","mango","kiwi"] -> ["apple","kiwi","lime","mango","papaya","watermelon"] 


#include <bits/stdc++.h>
using namespace std;



void  selectionsort(char fruit[][60],int &n){
    for(int i=0;i<n-1;i++){


        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_idx],fruit[j])>0){
                min_idx=j;
            }
        }
        if(i!=min_idx){
            swap(fruit[i],fruit[min_idx]);
        }
    }
    return;
}



int main(){
    char fruit[][60]={"papaya","lime","watermelon","apple","mango","kiwi"};
    int n=sizeof(fruit)/sizeof(fruit[0]);
    selectionsort(fruit,n);

    for(int i=0;i<n;i++){
        cout<<fruit[i]<<" ";
    }cout<<endl;

    return 0;
}