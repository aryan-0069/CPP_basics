#include <bits/stdc++.h>
using namespace std;
int main(){
    //set -> take unique eleement in ascendinng order

    //inserting inside a set
    set<int> st;
    int n; 
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
        
    }
    //st={1,2,5}  (suppose)




    //erase functionality
    st.erase(st.begin()); //st.erase(iterator) // st->{2,5}

    st.erase(st.begin(),--st.end()); // ->{}
    //st.erase(startiterator,enditerator)

    st.erase(5) ;//st.erase(element) // delete the 5


    set<int>st={1,5,7,8};
    auto it=st.find(7); //it will be iterator to 7
    auto it=st.find(9); // ->it=st.end() as 9 not presnt

    st.emplace(6); //st.insert(6)

    cout<<st.size()<<endl;

    //iterating the set
    for(auto it=st.begin();it!=st.end();it++){
        cout<<(*it)<<" ";
    }

    for(auto it: st){
        cout<<it<<" ";
    }

    //delete the entire set <=> st.clear()
    st.erase(st.begin(),st.end());










    //unordered set-> same function as set

    unordered_set<int> us; //any order baaki sab same as set
    us.insert(2);
    us.insert(4);
    us.insert(1);

    //advantage over set->avg time complexity is o(1) , takes very less time
    //tle -> switch to the set , but first reference is unordered set
    //if we dont need to store eleement in ascending order always use unordered set







    //multiset -> sorted set with ability to store multiple eleemnts,same as set

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(2);
    ms.insert(3);
    //ms ->{1,2,2,3,3}

    ms.erase(2); //all the instances will be erased

    auto it=ms.find(2); //returns an iterator pointing to first occurence of element 

    ms.clear(); //deleted the enitre set
    ms.erase(ms.begin(),ms.end()); //deleted the enitre set

    // if we want to erase only one instances
    ms.erase(ms.find(2));

    //find how many times 2 occured
    ms.count(2);




    return 0;
}