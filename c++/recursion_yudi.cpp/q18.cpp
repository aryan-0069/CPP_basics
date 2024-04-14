//fibonacci series

#include <bits/stdc++.h>
using namespace std;


int fibo(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fibo(n-1) + fibo(n-2);
}
                      
int main(){
    clock_t start, end;
    start = clock();
    
    //for single input
    int n; cin >> n;
    int term = fibo(n-1);
    cout << term << endl;

    end = clock();
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(5);
    cout << " sec " << endl;

    // for(int i=0;i<=10;i++){
    //     cout << fibo(i) << " ";
    // }
    // cout << endl;
    return 0;
}