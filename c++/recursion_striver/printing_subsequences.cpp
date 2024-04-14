//printing subsequence -- formula 2^n 


#include <bits/stdc++.h>
using namespace std;

//TIME COMPLEXITY -> O(n*(2^n))
//SPACE COMPLEXITY -> O(n)

void subsequence (vector<int> &arr,int curr_index,vector<int> temp){
    int n =  arr.size();
    if(curr_index == n){
        for(int i=0;i<temp.size();i++){
            cout << temp[i] << " ";
        }
        cout << endl;
        return;
    }

    //taking the element in the curr_index into your subsequence
    temp.push_back(arr[curr_index]);
    subsequence(arr,curr_index+1,temp);

    //not taking the element into your subsequence
    temp.pop_back();
    subsequence(arr,curr_index+1,temp);
}


int main(){
    vector<int> arr = {3,1,2};
    vector<int> temp;
    subsequence(arr,0,temp);
    return 0;
}