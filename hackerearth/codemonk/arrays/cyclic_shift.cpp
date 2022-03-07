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
    unsigned int t;
    ll n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        string s;
        cin >> s;
        string s1(s);
        ll cnt = 0;
        if (s.find('0') != n && s.find('1') != n)
        {
            if (s[n - 1] == '0')
            {
                int max = 0, ones = 0, maxpos = 0, pos = 0;
                REP(i, 0, n)
                {
                    if (s[i] == '1')
                    {
                        ones++;
                    }
                    else
                    {
                        if (ones > max)
                        {
                            max = ones;
                            maxpos = pos;
                        }
                        pos = i + 1;
                        ones = 0;
                    }
                }
            }
        }
        else
            cout << k;
        // do something
    }
    return 0;
}