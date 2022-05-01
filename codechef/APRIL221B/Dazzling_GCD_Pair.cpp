#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
#define ALL(x) begin(x), end(x)
#define SZ(x) (ll)(x).size()
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;    
    while(t--){
        int n, m,k,l;
        cin >> n >> m;
        if (n % 2 == 0){
            if (m - n >= 2){
                k=n;
                l=n + 2;
            }
            else {
                k=-1;
            }
        }
        else {
            if (m - n >= 3){
                if (n % 3 == 0){
                    k= n ;
                    l= n + 3;
                }
                else {
                    k= n + 1 ;l= n + 3;
                }
            }
            else{
                k=-1 ;
            }
        }
        (k==-1)?cout<<k:cout<<k<<' '<<l;
        cout<<"\n";
        }
    return 0;
}