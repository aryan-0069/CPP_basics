#include <iostream>
#include <vector>
using namespace std;
//1-based indexing
int main(){
    int n;
    cin>>n;
    vector <int> v(n+1,0);
    cout<<"ENTERING ARRAY INFO"<<endl;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }


    //calculating prefix sum
    for(int i=1;i<=n;i++){
        v[i]=v[i]+v[i-1];
    }
    

    //queries part
    cout<<"ENTER NUMBER OF QUERIES = ";
    int q;
    cin>>q;

    for(int i=0;i<q;i++){
        int a;
        cin>>a;
        int b;
        cin>>b;
        int ans=0;
        ans=v[b]-v[a-1];
        cout<<ans;
    }
    
    return 0;
}