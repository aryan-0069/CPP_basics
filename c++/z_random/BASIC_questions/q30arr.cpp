#include <bits/stdc++.h>
using namespace std;
int main(){
    char array[]={'a',' ',' ','y','4'};
    int cons=0,vow=0,dig=0,space=0;
    for(int i=0;i<5;i++){
        if(array[i]==' '){
            space++;
        }
        else if(array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o' || array[i]=='u' ||array[i]=='A' || array[i]=='E' || array[i]=='O' || array[i]=='I' || array[i]=='U'){
            vow++;
        }
        else if(array[i]>='0' && array[i]<='9'){
            dig++;
        }
        else{
            cons++;
        }
    }
    cout<<cons<<endl;
    cout<<vow<<endl;
    cout<<dig<<endl;
    cout<<space<<endl;
    return 0;
}