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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ull t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        ll o = 0, m = 0;
        REP(i, 0, n)
        {
            cin >> arr[i];
            (arr[i] == -1) ? m++ : o++;
        }
        if (abs(m - o) < 2)
            cout << "Yes\n";
        else if (abs(o - m) == 2)
            (m % 2) ? cout << "No\n" : cout << "Yes\n";
        else
            cout << "No\n";
        // do something
    }
    return 0;
}