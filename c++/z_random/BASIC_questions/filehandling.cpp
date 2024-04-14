#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#define int int64_t
                      
signed main(){
    fstream myFile;


    myFile.open("aryan.txt",ios::out); // write mode
    if(myFile.is_open()){
        myFile << "FIRST LINE\n";
        myFile << "SECOND LINE\n";
        myFile.close();
    }


    myFile.open("aryan.txt",ios::app); // append mode
    if(myFile.is_open()){
        myFile << "THIRD LINE\n";
        myFile << "FOURTH LINE\n";
        myFile.close();
    }

    myFile.open("aryan.txt",ios::in); // read mode
    if(myFile.is_open()){
        string line;
        while(getline(myFile,line)){
            cout << line << endl;
        }
        myFile.close();
    }
    return 0;
}