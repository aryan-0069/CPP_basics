#include <iostream>
using namespace std;

int main(){
    int max=0;
    int max2=0;
    int maxindex=0;
    int array[]={1,2,3,33,33,5,6};
    for(int i=0;i<7;i++){
        if (array[i]>max){
            max=array[i];
            maxindex=i;


        }
    }
    for(int i=0;i<7;i++){
        if(array[i]==max){
            array[i]=-1;
        }
    }
    //array[maxindex]=-1;
    for(int i=0;i<7;i++){
        if(array[i]>max2){
            max2=array[i];
        }


    }
    cout<<max2;
    return 0;
}