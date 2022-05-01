#include <bits/stdc++.h>
#define REP(i, a, b) for (int i = a; i < b; i++)
#define MOD 1000000007

using namespace std;
typedef unsigned long long ull;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n, m;
    cin >> n >> m;
    ull A[n];
    REP(i, 0, n)
    cin >> A[i];
    int c0, nc;
    ull wx, cx;
    for (int i = 0; i < m; i++)
    {
        cin >> c0 >> nc;
        while (nc-- > 0)
        {
            cin >> wx >> cx;
            A[cx - 1] += ((wx % MOD) * (A[c0 - 1] % MOD)) % MOD;
            A[cx - 1] = A[cx - 1] % MOD;
        }
        A[c0 - 1] = 0;
    }
    REP(i, 0, n)
        cout << A[i] % MOD<< "\n";
    return 0;
}