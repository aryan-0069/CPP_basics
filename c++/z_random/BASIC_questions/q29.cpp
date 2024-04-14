//29. Write a program to check if the letter 'e' is present in the word 'Umbrella'.
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str="Umbrella";
    //cin>>str;
    int k;
    for(int i=0;i<str.size();i++){
        if(str[i]=='e'){
            k=0;
            break;

        }
        else{
            k=1;
        }


    }
    if(k==1){
        cout<<"not present";
    }
    else{
        cout<<"present";
    }

    return 0;
}