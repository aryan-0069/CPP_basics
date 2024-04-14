#include <bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int> &arr,int k){
    deque<int> dq;
    vector<int> res;
    for(int i=0;i<k;i++){
        while(!dq.empty() && arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res.push_back(arr[dq.front()]);
    for(int i=k;i<(int)arr.size();i++){
        int curr=arr[i];
        if(dq.front() == (i-k)) dq.pop_front();
        while(!dq.empty() && arr[dq.back()]<arr[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        res.push_back(arr[dq.front()]);
    }
}

int main(){
    
    return 0;
}