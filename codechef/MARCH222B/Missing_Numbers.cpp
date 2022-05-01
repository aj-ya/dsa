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
        ll op[4], a = 0, b = 0;
        REP(i, 0, 4)
        cin >> op[i];
        sort(op, op + 4);
        bool flag = false;
        if (op[0] < 0)
        {
            if (op[1] == 0)
            {
                // a<b
                a = 1;
                b = op[3] - 1;
                if (-b + 1 != op[0])
                    flag = true;
                if (b != op[2])
                    flag = true;
                if (flag == true)
                {
                    flag = false;
                    // a!=1
                    a = (op[2] + op[0]) / 2; // (a+b +a -b )/2
                    b = op[2] - a;           // a+b-a
                    if (a < 1 || b < 1)
                        flag = true;
                    else if (a - b != op[0])
                        flag = true;
                    else if (a + b != op[2])
                        flag = true;
                    else if (a * b != op[3])
                        flag = true;
                    else if(a/b!=op[1])
                        flag=true;
                    if (flag)
                        a = b = -1;
                }
            }
            else
            {
                a = b = -1;
            }
        }
        else if (op[0] == 0)
        {
            if (op[1] == 1)
            {
                // a/b=1
                a = b = 1;
                if (op[2] != 1 || op[3] != 2)
                    flag = true;
                if (flag == true)
                {
                    flag = false;
                    a = b = op[2] / 2.0;
                    if (op[3] != a * a)
                        flag = true;
                }
                if (flag)
                    a = b = -1;
            }
            else
            {
                a = b = -1;
            }
        }
        else
        {
            // a>b
            flag = false;
            b = 1;
            a = op[3] - 1;
            if (a - 1 != op[0])
                flag = true;
            if (a != op[2] || op[2] != op[1])
                flag = true;
            if (flag)
                a = b = -1;
            if (flag == true)
            {
                // b!=1
                flag = false;
                // a+b=op[2]
                // a-b=op[0]
                a = (op[2] + op[0]) / 2; // (a+b +a -b )/2
                b = op[2] - a;           // a+b-a
                if (a < 1 || b < 1)
                    flag = true;
                else if (op[3] != a * b)
                    flag = true;
                else if (op[0] != a - b)
                    flag = true;
                else if (op[1] != a / b)
                    flag = true;
                else if (op[2] != a + b)
                    flag = true;
            }
            if (flag == true)
            {
                flag = false;
                // a+b=op[2]
                // a-b=op[0]
                a = (op[2] + op[1]) / 2; // (a+b +a -b )/2
                b = op[2] - a;           // a+b-a
                if (a < 1 || b < 1)
                    flag = true;
                else if (op[3] != a * b)
                    flag = true;
                else if (op[1] != a - b)
                    flag = true;
                else if (op[0] != a / b)
                    flag = true;
                else if (op[2] != a + b)
                    flag = true;
            }
            if (flag)
                a = b = -1;
        }
        cout << a << " " << b << "\n";
    }
    return 0;
}