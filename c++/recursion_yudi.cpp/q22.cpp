//print all subsequnce with sum = 3
#include <bits/stdc++.h>
using namespace std;

void subseq1(vector<int> &arr,int curr,vector<int> temp,int sum){
    int n = arr.size();
    if(curr == n){
        int s = 0;
        for(auto it:temp){
            s += it;
        }
        if(s == sum){
            for(auto it:temp){
                cout << it << " ";
            }
            cout << endl;
        }
        return;
    }

    //dont take
    subseq1(arr,curr+1,temp,sum);

    //take
    temp.push_back(arr[curr]);
    subseq1(arr,curr+1,temp,sum);
}


int main(){
    vector<int> arr = {1,2,3};
    vector<int> temp;
    int sum = 3;
    subseq1(arr,0,temp,sum);

    return 0;
}