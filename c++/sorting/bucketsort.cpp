#include <bits/stdc++.h>
using namespace std;
//used for sorting float numbers (numbers between 0 and 1)

void bucketsort(float arr[],int size){
    vector<vector<float>> bucket (size,vector<float> ());

    //inserting elements into vector
    for(int i=0;i<size;i++){
        int index = arr[i]*size;
        bucket[index].push_back(arr[i]);
    }


    //sorting inndividual buckets
    for(int i=0;i<size;i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(),bucket[i].end());
        }
    }


    //combining elements from bucket
    int k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<bucket[i].size();j++){
            arr[k++]=bucket[i][j];
        }
    }


}


int main(){

    int n;
    cin>>n;
    float arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    bucketsort(arr,n);

    cout<<"AFTER SORTING - ";

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}