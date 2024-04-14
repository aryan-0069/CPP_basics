#include <bits/stdc++.h>
using namespace std;
#define int int64_t

void recur(vector<int> &temp, set<vector<int>> &sv, vector<int> &arr, vector<int> &vis){
    int n = arr.size();
    if(temp.size() == n){
        sv.insert(temp);
        return;
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            vis[i] = 1;
            temp.push_back(arr[i]);
            recur(temp, sv, arr, vis);
            vis[i] = 0;
            temp.pop_back();
        }
    }
}

vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
    set<vector<int>> sv;
    vector<vector<int>> ans;
    vector<int> vis(n, 0);
    sort(begin(arr), end(arr));
    vector<int> temp;
    recur(temp, sv, arr, vis);
    for(auto i : sv){
        ans.push_back(i);
    }
    return ans;
}

int main(){
    
    return 0;
}