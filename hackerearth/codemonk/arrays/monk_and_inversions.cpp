#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i < b; i++)
#define ALL(x) begin(x), end(x)
#define SZ(x) (ll)(x).size()
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n));
        REP(i, 0, n)
        REP(j, 0, n)
            cin >> m[i][j];
            int count =0;
        REP(i, 0, n)
        REP(j, 0, n)
        REP(p, i, n)
        REP(q, j, n)
        if(m[i][j]>m[p][q])count++;
        cout<<count<<"\n";
        // do something
    }
    return 0;
}