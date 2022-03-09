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

int sumOfSquares(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    return sum;
}
bool isHappy(int n)
{
    if (n == 1)
        return true;
    int slow = n, fast = n;
    do
    {
        slow = sumOfSquares(slow);
        fast = sumOfSquares(sumOfSquares(fast));
    } while (slow != fast);
    return slow == 1 ? true : false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n;
    cin >> t;
    cout<< isHappy(t);
    return 0;
}