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
    int a[8] = {-1, 2, 4, -3, 5, 2, -5, 2};
    int max_sum = 0, sum = 0;
    cout << "sum\ta[i]\tmax_sum\n";
    REP(i, 0, 8)
    {
        cout << sum << "\t" << a[i] << "\t" << max_sum << "\n";
        sum += a[i];
        if (sum < 0)
            sum = 0;
        if (sum > max_sum)
            max_sum = sum;
    }
    // cout<<max_sum;
    // do something
    return 0;
}