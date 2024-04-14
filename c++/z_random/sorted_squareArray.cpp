#include <iostream>
#include <vector>
using namespace std;

void SortedSquareArray(vector <int> &v){
    vector<int> ansarray;
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ansarray.push_back(v[right_ptr]*v[right_ptr]);
            right_ptr--;
        }
        else{
            ansarray.push_back(v[left_ptr]*v[left_ptr]);
            left_ptr++;
        }
        

    }
    for(int i=ansarray.size()-1;i>=0;i--){
        cout<<ansarray[i]<<" ";

    }
}
int main(){
    int n;
    cin>>n;
    vector <int> v;

    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    SortedSquareArray(v);
    

    return 0;
}