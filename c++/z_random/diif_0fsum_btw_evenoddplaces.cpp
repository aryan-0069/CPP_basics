#include <iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5,6};
    int oddsum=0;
    int evensum=0;
    for(int i=0;i<6;i++){
        if(i%2==0 || i==0){
            evensum=evensum + array[i];
        }
        else{
            oddsum = oddsum + array[i];
        }
    }
    cout<<"diff"<<evensum-oddsum;

    return 0;

}