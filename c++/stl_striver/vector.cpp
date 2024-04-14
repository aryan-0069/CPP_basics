#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec;

    //segmentation error if you push_back more than 10^7
    vec.push_back(0);  //size -> {0}
    vec.push_back(1); //size-> {0,1}

    vec.pop_back(); //size{0}

    vec.push_back(0);  //size -> {0,0}
    vec.push_back(1); //size-> {0,0,1}

    reverse(vec.begin(),vec.end()); // {1,0,0}

    vec.clear(); //cleat all element at once {}

    vec.size();  // size = 0
 
    vector<int> arr(5,0); //-> {0,0,0,0,0}


    //copy the entire arr  in vec2
    vector<int>vec2(arr.begin(),arr.end()); //second value(.end()) is -1  the whole index
    // vector<int>vec2(arr);

    vector<int> aryan ;
    aryan.push_back(1); //aryan.emplace_back(1) //emplace_back takes lesser time than push_back , emplace_back in recommened in CP 
    aryan.push_back(2);
    aryan.push_back(4);
    aryan.push_back(6);  //->{1,2,4,6} 

    vector<int> aryan5(aryan.begin(),aryan.begin()+2);  //->{1,2}

    // lower bound,upper bound

    // swap -> swap(v1,v2) ->swaps v1 and v2

    //begin,end,rbegin,rend

    //defining 2D vectors
    vector<vector<int>> v;

    vector<int>aryan1;
    aryan1.push_back(1);
    aryan1.push_back(3);
    aryan1.push_back(5);

    vector<int>aryan2;
    aryan2.push_back(4);
    aryan2.push_back(7);
    aryan2.push_back(8);

    vector<int> aryan3;
    aryan3.push_back(9);
    aryan3.push_back(9);
    aryan3.push_back(9);


    v.emplace_back(aryan1);
    v.emplace_back(aryan2);
    v.emplace_back(aryan3);

    //iterating a 2d vector using foreach loop

    for(auto it:v){
        for(auto vectr:it){
            cout<<vectr<<" ";
        }
        cout<<endl;
    }cout<<endl;
    
    //iterating a 2d vector using for loop
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }

    


    //defining a 10x20 vector (i.e 10 vectors in vector having 20 spaces)  ,it only assign same value
    vector<vector<int>> v1(10,vector<int> (20,0));  //vector of vector ->dynamic in both rows and column
    v1.push_back(vector<int>(20,0));//we can insert a vector in this 
    v1[0].push_back(1); //we can also element in vector



    //array of vector ->dynamic only across column 
    vector<int> arre[5]; //5 size array in which every elemnt have data type vector
    arre[1].push_back(4); //we can only insert element in eleemnt vector




    //defining a 3d array -> 10x20x30 ->arr[10][20][30]
    vector<vector<vector<int>>>v2(10,vector<vector<int>>(20,vector<int>(30,0)));






    return 0;
}