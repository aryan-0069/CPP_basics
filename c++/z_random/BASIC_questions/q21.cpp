/*
21. Write a Java program that takes the user to provide a single character
from the alphabet. Print Vowel or Consonant, depending on the user input.
*/
#include <iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        cout<<"vowel";
    }
    else{
        cout<<"CONSONANT";
    }
    return 0;
}