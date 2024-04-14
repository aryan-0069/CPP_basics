//print the count of all subsequnce w/o global counter 
#include <bits/stdc++.h>
using namespace std;

int subseq1(vector<int> &arr,int curr,int sum){
    int n = arr.size();
    if(curr == n){
        if(sum == 0){
            return 1;
        }
        return 0;
    }

    int includ = subseq1(arr,curr+1,sum-arr[curr]);
    int exclud = subseq1(arr,curr+1,sum);
    return includ + exclud;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int sum = 5;
    cout << subseq1(arr,0,sum) << endl;
    return 0;
}