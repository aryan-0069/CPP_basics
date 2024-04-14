#include<bits/stdc++.h>
using namespace std;

int histogram(vector<int> &arr){
    int n=arr.size();
    stack<int> st;
    int ans = INT_MIN;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i]<arr[st.top()]){
            int el = arr[st.top()];
            st.pop();
            int nsi = i;
            int psi = (st.empty() ? -1 : st.top());
            ans = max(ans,el*(nsi - psi - 1));
        }
        st.push(i);
    }
    while(!st.empty()){
        int el = arr[st.top()]; 
        st.pop();
        int nsi = n;
        int psi = (st.empty() ? -1 : st.top());
        ans = max(ans, el*(nsi-psi-1));
    }
    return ans;
}

int main(){
    int n; cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++) cin>>vec[i];

    int res = histogram(vec);
    cout<<res<<endl;
    return 0;
}