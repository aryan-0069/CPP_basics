#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define size(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl '\n'
#define int int64_t
#define countbits(x) __builtin_popcountll(x)
const int INF = 1e18;
const int mod = 1e9 + 7;

#ifndef Aryannn09
#define debug(x) cerr << #x << " " ; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(bool t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T> void _print(vector <T> v) {cerr << "{ "; for (T i : v) {_print(i); cerr << " ";} cerr << "}";}
template <class T> void _print(set <T> v) {cerr << "{ "; for (T i : v) {_print(i); cerr << " ";} cerr << "}";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int ModAdd(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int ModMul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int ModSub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());


void solve(){
    int n; cin >> n;
    vector<string> a(n);
    for(auto &i : a) cin >> i;
    map<string,int> m;
    for(int i=0;i<n;i++){
        string t = a[i];
        reverse(all(t));
        if(t == a[i]){
            cout << "YES" << endl;
            return;
        }
        if(m[t] > 0){
            cout << "YES" << endl;
            return;
        }
        if(size(a[i]) == 2){
            char q = a[i][0];
            char w = a[i][1];
            if(q == w){
                string f, g, h;
                f += q;
                g += q;
                g += q;
                h += q;
                h += q;
                h += q;
                if(m[f] > 0 || m[g] > 0 || m[h] > 0){
                    cout << "YES" << endl;
                    return;
                }
            }
            else{
                string l;
                l += w;
                if(m[l] > 0){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        else if(size(a[i]) == 3){
            char q = a[i][0];
            char w = a[i][1];
            char e = a[i][2];
            if(q == w && q == e){
                string h, j;
                j += q;
                h += q;
                h += q;
                if(m[j] > 0 || m[h] > 0){
                    cout << "YES" << endl;
                    return;
                }
            }
            else if(q == w){
                string g, l;
                g += e;
                g += w;
                l += e;
                if(m[g] > 0 || m[l] > 0){
                    cout << "YES" << endl;
                    return;
                }
            }
            else if(w == e){
                string j;
                j += e;
                j += w;
                if(m[j] > 0){
                    cout << "YES" << endl;
                    return;
                }
            }
            else{
                string k;
                k += e;
                k += w;
                if(m[k] > 0){
                    cout << "YES" << endl;
                    return;
                }
            }
        }
        m[a[i]]++;
    } 
    cout << "NO" << endl;
}



signed main(){
//#ifndef Aryannn09
//    freopen("aryo.txt", "w", stderr);
//#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << setprecision(15); 
    //cout.setf(ios::fixed);

    int testcases=1;
    cin>>testcases;   /* comment if no testcases */
    while(testcases--){
        solve();
    }
    return 0;
}