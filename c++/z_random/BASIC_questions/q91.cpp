/*
When preparing a tournament, Yudhish tries his best to make the first problem as easy as possible. 
This time he has chosen some problem and asked n people about their opinions. 
Each person answered whether this problem is easy or hard.

If at least one of these n people has answered that the problem is hard, 
Yudhish gives extra 50 questions to solve. For the given responses, check if the problem is easy enough.

The array will contain only 0's and 1's where 0 means ith person says it is easy , 
1 means ith person says it is hard, If any of them says it is hard print "HARD" else print "EASY".
*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=6,a=0;
    int array[n]={0,0,0,0,0,0};
    for(int i=0;i<n;i++){
        if(array[i]==1){
            a=1;
            break;
        }
    }
    if(a==1){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}