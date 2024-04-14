#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int array[]={3,44,100,1,2};
    for(int i=0;i<5;i++){
        sum=sum + array[i];
    }
    cout<<sum;
    return 0;
}