#include<bits/stdc++.h>
using namespace std;

vector<int> pse(vector<int> &arr){
    int n=arr.size();
    reverse(arr.begin(),arr.end());
    vector<int> output(n,-1);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            output[st.top()]=arr[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty()){
        output[st.top()]=-1;
        st.pop();
    }
    reverse(output.begin(),output.end());
    return output;
}

int main(){
    int n; cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];

    vector<int> res = pse(vec);
    for(auto &it:res){
        cout<<it<<" ";
    }cout<<endl;
    return 0;
}