#include <bits/stdc++.h>
using namespace std;
int main(){


    //algorothm
    //sorting->using iterator 
    //array,vector

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n); //directly sort the array in ascending order , tc->nlog(n)

    //sort array from index 1 to 3
    sort(arr+1,arr+4);

    vector<int> vec(5,0);
    for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());

    //vec -> {1, 4, 3, 6, 5}
        //    0  1  2  3  4

    //sort it from index 1 to 3
    //output - {0, 3, 4, 6, 5}

    sort(vec.begin()+1,vec.begin()+4); //(1,4]    








    //reverse(start_iterator,end_iterator) ->(]

    reverse(arr,arr+n);

    reverse(arr+1,arr+4);

    reverse(vec.begin(),vec.end());

    reverse(vec.begin()+1,vec.begin()+4);




    //find the maximum element in array from index i to j
    int i =1 , j=4;
    int maxi = INT_MIN;

    for(int k=i;k<=j;k++){
        if(arr[k]>maxi){
            maxi=arr[k];
        }
    }

    //algo for the same
    //*max_element(first_iterator,last_iterator)
    //*min_element(first_iterator,last_iterator)


    //for array->
    int el=*max_element(arr,arr+n);
    int el=*min_element(arr,arr+n);


    //for vector
    int el=*max_element(vec.begin(),vec.end());
    int el=*min_element(vec.begin(),vec.end());



    //i give you a range i want you to give me sum between that
    int sum=0;
    for(int k=i;k<j;k++){
        sum+=arr[k];
    }

    //algo for above
    //accumulate(start_iteratot,end_iterator,initial sum)

    int sum=accumulate(arr,arr+n,0); //-> for array
    int sum=accumulate(vec.begin(),vec.end(),0); //-> for vector



    //arr[]={1,2,3,4,5,5}
    //tell me how many element 5 is occured
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==5){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    //algo for same logic
    //count(firstiteratot,lastiterator,x)
    int cnt=count(arr,arr+n,5);
    int cnt=count(vec.begin(),vec.end(),4);




   
   
   
    //arr[] -> {1,2,5,1,2,4,4}
    //i want you find the first occurence of 2

    int ind=-1;
    for(int i=0;i<7;i++){
        if(arr[i]==2){
            ind =i;
            break;
        }
    }cout<<ind<<endl;
    //algo for above
    //arr[] -> {1,2,5,1,2,4,4} - 1st occurence of 2

    auto it=find(arr,arr+n,2);//return an iterator
    //pointing to the first instance of it , or else it return pointing to end() if it not there
    cout<<it-arr<<endl; //-> this will prive the index
    //cout<<it-vec.begin(); for vector



    //binary search
    //this stl only works on sorted array
    //aa[] -> {1,5,7,9,10}
    //x=9
    //true -> 9 exist on my array
    //x=8
    //false -> 8 doesnot exist on my array


    //binary_search(firstiterator,lastiterator,x)
    //returns a true or return a false
    bool res = binary_search(arr,arr+n,8); //log n
    bool res = binary_search(vec.begin(),vec.end(),8);




    //lower_bound func(equals to or greater x)
    //returns an iterator pointing to the first
    //element which is not less than x
    //arr[]={1,5,7,7,8,10,10,11,11,12}
    //x=10
    
    int x=10;
    auto it = lower_bound(arr,arr+n,x);
    ind = it - arr;

    auto it1=lower_bound(vec.begin(),vec.end(),x);
    int ind= it1 - vec.begin();

    int ind=lower_bound(vec.begin(),vec.end(),x)-vec.begin();
    


    //upper_bound 
    //returns an iterator pointing to the first
    //element which is greater than x
    //arr[]={1,5,7,7,8,10,10,11,11,12}
    //x=10 , ->8(index)
    //x=12 , -> arr+10


    auto it=upper_bound(arr,arr+n,x);
    ind = it -arr;

    auto it1=upper_bound(vec.begin(),vec.end(),x);
    int ind1 = it1 - vec.begin();

    int ind1=upper_bound(vec.begin(),vec.end(),x)- vec.begin();
     








    //q1 - find the first index where the element X lies
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;


    //first way
    if(binary_search(a,a+n,x)==true){
        cout<<upper_bound(a,a+n,x)-a;
    }
    else{
        cout<<"does not exist";
    }


    //second way
    int ind = lower_bound(a,a+n,x)-a;
    if(ind!=n && a[ind]==x){
        cout<<"FOUND AT "<<ind;
    }
    else{
        cout<<"not found";
    }


















    //q2 - find me the last occurence of array
    //arr[]={1,5,7,7,8,10,10,11,11,12}
    //last occurence of x=10 is 7th index

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;

    auto it2 = upper_bound(a,a+n,x)-a;
    it2--;
    if(a[it2]==x && it2>=0){
        cout<<"last occurence = "<<it2;
    }

















    //q3 - tell me the number of times the x appears in arr
    //arr[]={1,5,7,7,8,10,10,11,11,12}
    //x=10 , ans = 3
    //x=7 , ans = 2


    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;

    auto ub= upper_bound(a,a+n,x)-a;
    auto lb= lower_bound(a,a+n,x)-a;

    cout<<ub-lb;







    // next permutation
    // string s = "abc"
    // all permutations are as follows:
    // abc,acb,bac,bca,cab,cba  (sorted in lexiographic order)
    //s=bac
    //bool res = next_permutation(s.begin(),s.end());
    //prints -> true(cab)
    //s=cba
    //bool res = next_permutation(s.begin(),s.end());
    //prints -> false(as no permutation after this is possible)


    //i give you any random string s ="bca"
    // iwant you to print all the permutation

    string s = "bca";
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    //for array
    int arr[] = {1,4,2};
    int n=3;
    sort(arr,arr+n);
    do{
        for(int i=0;i<n;i++)cout<<arr[i]<<" ";
        cout<<endl;
    }while(next_permutation(arr,arr+n));


    //prev permutation
    bool res = prev_permutation(s.begin(),s.end());











































    return 0;
}