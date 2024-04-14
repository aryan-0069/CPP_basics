//print the count of all subsequnce with global counter
#include <bits/stdc++.h>
using namespace std;

int cnt = 0;

void output_vector(vector<int> &arr){
    int N = arr.size();
    for(int i=0;i<N;i++){
        cout << arr[i] << " \n"[i== N-1];
    }
}

void subseq1(vector<int> &arr,int curr,vector<int> temp,int sum){
    int n = arr.size();
    if(sum < 0){
        return;
    }
    if(curr == n){
        if(sum == 0){
            cnt++;
            return;
        }
        return;
    }

    //dont take
    subseq1(arr,curr+1,temp,sum);

    //take
    temp.push_back(arr[curr]);
    subseq1(arr,curr+1,temp,sum-arr[curr]);
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    vector<int> temp;
    int sum = 5;
    subseq1(arr,0,temp,sum);
    cout << cnt << endl;
    return 0;
}