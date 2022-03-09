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

//an Ugly Number is a number whose factors are limited to just 2,3,5
bool isUgly(int n)
{
    if (n <= 0)
        return false;
    if (n == 1)
        return true;
    bool ans;
    if (n % 2 == 0)
        ans = isUgly(n / 2);
    else if (n % 3 == 0)
        ans = isUgly(n / 3);
    else if (n % 5 == 0)
        ans = isUgly(n / 5);
    else
        ans = false;
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << isUgly(n);
        // do something
    }
    return 0;
}