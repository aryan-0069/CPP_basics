#include <bits/stdc++.h>
using namespace std;
                      


class Solution {
public:
    static void findCombination(int current_index,vector<vector<int>> &temp_ans,vector<int> temp,vector<int> &arr,int target){
        int n = arr.size();
        if(current_index == n){
            if(target == 0){
                temp_ans.push_back(temp);
            }
            return;
        }

        temp.push_back(arr[current_index]);
        findCombination(current_index+1,temp_ans,temp,arr,target-arr[current_index]);

        temp.pop_back();
        findCombination(current_index+1,temp_ans,temp,arr,target);
    }

    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        set<vector<int>> temp_ans;
        vector<int> temp;
        sort(arr.begin(),arr.end());
        findCombination(0,temp_ans,temp,arr,target);
        vector<vector<int>> ans;
        for(vector<int> &it : temp_ans){
            ans.push_back(it);
        }
        return ans;
    }
};