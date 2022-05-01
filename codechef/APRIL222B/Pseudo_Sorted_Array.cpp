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
    cout.tie(0);
    ull t, n;
    cin >> t;
    while (t--)
    {
        int c = 0;
        cin >> n;
        ull arr[n];
        REP(i, 0, n)
        {
            cin >> arr[i];
            if (arr[i - 1] > arr[i] && i >= 1)
            {
                swap(arr[i - 1], arr[i]);
                if (arr[i - 2] > arr[i - 1] && i >= 2)
                    c += 1;
                c+=1;
            }
        }

        c >= 2 ? cout << "NO" : cout << "YES";
        cout << "\n";
    }
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
