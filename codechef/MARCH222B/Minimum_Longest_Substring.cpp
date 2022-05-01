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
        string s;
        cin >> s;
        ll no = 0, nz = 0, mn;
        REP(i, 0, n)
        (s[i] == '0') ? nz++ : no++;
        string a, b;
        mn = min(nz, no);
        REP(i, 0, mn)
        {
            a += "01";
            b += "10";
        }
        if (mn == nz)
        {
            REP(i, 0, no - nz)
            {
                a = a + '1';
                b = '1' + b;
            }
        }
        else 
        {
            REP(i, 0, nz - no)
            a ='0'+a;
            b = b+'0';
        }
        // do something
        cout << b << "\n"
             << a << "\n";
    }
    return 0;
}