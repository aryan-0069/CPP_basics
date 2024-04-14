#include <bits/stdc++.h>
using namespace std;
int main(){
    //bitset

    //int-> 16 bits
    //char-> 8 bits

    //bitset ->1bit

    bitset<5> bt; //stores only 1 or 0
    cin>>bt; 
    //set=1
    //unset=0



    //all
    cout<<bt.all()<<endl; //return a true or false (if all bits are set = true ; if anyone is unset it is false)
    //eg. 111111 -> true , 101111 -> false



    //any
    cout<<bt.any()<<endl;//prints true if any of the bit is set
    //eg. 10001 ->true , 00000->false



    //count
    cout<<bt.count()<<endl; //prints the number of set bits
    //eg. 1110000-> output=3




    //flip(index)-> it changes 1 to 0 and vice-versa
    bt.flip(2); 
    bt.flip(); //flips all value
    //eq, bt=10011 , output-10111



    //none-> if none is set then prints true , else false
    cout<<bt.none()<<endl;
    //bt= 10000 , return false
    //bt=00000 , return true



    //set
    bt.set();// sets all the bits to 1
    bt.set(2); //set the second index to 1
    bt.set(2,0); //set the seond index to 0


    //reset-> turns all the index to zero
    bt.reset();

    bt.reset(2); //turn the second index to 0

    
    //size
    cout<<bt.size(); //prints 5


    //test
    cout<<bt.test(1); // check if the bit is set or not at index 1









    return 0;
}