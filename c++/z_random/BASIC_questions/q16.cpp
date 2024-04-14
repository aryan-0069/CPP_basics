/*
16. A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student allowed to sit in exam or not.
*/

#include <iostream>
using namespace std;
int main(){
    int class_attended,total_class;
    cin>>class_attended>>total_class;
    int t=(class_attended/total_class)*100;
    cout<<t;
    if(t>75){
        cout<<"EXAM DEDO";
    }
    else{
        cout<<"EXAM DENE KA SOCHNA BHI MAT";
    }

    return 0;
}