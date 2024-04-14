//Find sum and average of all elements in array.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int array[]={1,2,3,4,6};
    double avg=0;
    double sum=0;
    for(int i=0;i<5;i++){
        sum+=array[i];
    }
    avg=sum/5;
    cout<<sum<<endl;
    cout<<avg;
    return 0;
}