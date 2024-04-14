//print all sub sequence

#include <bits/stdc++.h>
using namespace std;

//approach 1 -> incase of not taking the element we simply call func again & if we want to take it we pushback it to the arr
void subseq1(vector<int> &arr,int curr,vector<int> temp){
    int n = arr.size();
    if(curr == n){
        for(auto it:temp){
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    //dont take
    subseq1(arr,curr+1,temp);

    //take
    temp.push_back(arr[curr]);
    subseq1(arr,curr+1,temp);
}


//approach 1 -> firstly we pushback and call the func for included part then pop it back and call for the excluded part
void subseq2(vector<int>&arr,int curr,vector<int> temp){
    int n = arr.size();
    if(curr == n){
        for(auto it:temp){
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    //include
    temp.push_back(arr[curr]);
    subseq2(arr,curr+1,temp);

    //exclude
    temp.pop_back();
    subseq2(arr,curr+1,temp);

}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> temp;
    subseq1(arr,0,temp);
    cout << endl;
    temp.clear();
    subseq2(arr,0,temp);
    return 0;
}