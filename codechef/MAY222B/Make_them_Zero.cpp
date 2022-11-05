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
const int lenStr = 32;

string customAdd(string &s1, string &s2)
{
    string res = "";
    for (int i = 0; i < lenStr; i++)
        res += (s1[i] == '1' || s2[i] == '1') ? '1' : '0';
    // cout << s1.length() << " & " << s2.length() << "\n";
    // reverse(res.begin(), res.end());
    // cout << res.length();
    return res;
}
int numOnes(string s)
{
    int c = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '1')
            c++;
    return c;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        string res = bitset<lenStr>(0).to_string();
        REP(i, 0, n)
        {
            cin >> a[i];
            string binary = bitset<lenStr>(a[i]).to_string();
            res = customAdd(res, binary);
        }
        cout << numOnes(res) << "\n";
    }
    return 0;
}