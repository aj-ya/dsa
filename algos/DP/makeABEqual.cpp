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
typedef vector<vector<int>> vii;
typedef pair<int, int> pi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

void makeEqual(ll a, ll b, ll x, ll op, ll &minOp)
{
    // cout << a << "\t" << b << "\t" << op << "\n";
    if (op >= minOp)
        return;
    if (a == b)
    {
        minOp = min(op, minOp);
        return;
    }
    else if (a < b)
    {
        makeEqual(a * x, b, x, op + 1, minOp);
        makeEqual(a - 1, b, x, op + 1, minOp);
    }
    else
    {
        op += (a - b);
        minOp = min(op, minOp);
        return;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int a, b, x, minOp = LLONG_MAX;
    cin >> a >> b >> x;
    // a = 2, b = 30, x = 2;
    makeEqual(a, b, x, 0, minOp);
    cout << minOp;
    return 0;
}