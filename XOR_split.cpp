#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <chrono>
#include <complex>
using namespace std;
#define endl "\n"
#define pb push_back;
#define eb emplace_back
#define mt make_tuple
#define all(x) begin(x), end(x)
#define sz(x) (ll)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << endl; 
    err(++it, args...); 
}
const ll linf = 1e18+10;
const int inf = 1e9+10;
const double eps = 1e-9;
const double pi = 3.1415926535897932384626433832795;
const int mod =   998244353;
const int base = 10;

void cinvec(vi& a){
    for(uint i=0;i<a.size();i++){
        cin>>a[i];
    }
}
void coutvec(vi& a){
    for(uint32 i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
void cinvec(vll& a){
    for(uint64 i=0;i<a.size();i++){
        cin>>a[i];
    }
}
void coutvec(vll& a){
    for(uint64 i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.exceptions(cin.failbit);
    unsigned int t;
    int64 n;
    cin>>t;
    while(t--){
        cin>>n;
        assert(n>=0);
        int m = __builtin_popcount(n);
        int k;
        if(m>1)k=1;
        else k=0;
        cout<<k<<"\n";
    }
    return 0;
}