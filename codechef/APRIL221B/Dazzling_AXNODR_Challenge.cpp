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
    unsigned int t, n;
    cin >> t;
    while (t--)
    {
        ll n = 0, ret = 0;
        cin >> n;
        if (n % 2 == 0){
            if (n % 4 == 0){
                ret = 3 ^ n;
            }
            else{
                ret = 3;
            }
        }
        else{
            if ((n - 1) % 4 == 0){
                ret = (3 ^ (n - 1))&n;
            }
            else{
                ret = 3;
            }
        }
        cout << ret << "\n";
    }
    return 0;
}