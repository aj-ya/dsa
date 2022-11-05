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

unsigned int numFarmsonDayM(int m, vi num)
{
    if (m > 0){
        return numFarmsonDayM()
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int c, n, m, tc;
    vi cows;
    unsigned int vis[50];
    // memset(vis, 0, 50 * sizeof(unsigned int));
    cin >> c >> n >> m;
    REP(i, 0, n)
    {
        cin >> tc;
        cows.EB(tc);
    }
    REP(i, 0, m)
    {
        cin >> vis[i];
    }

    return 0;
}