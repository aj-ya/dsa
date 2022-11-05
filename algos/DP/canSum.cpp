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

bool canSum(vector<int> &arr, int target, vector<int> &memo)
{
    if (target == 0)
        return true;
    if (memo[target] != 0)
        return memo[target] == 1 ? true : false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (target - arr[i] >= 0)
        {
            if (canSum(arr, target - arr[i], memo))
            {
                memo[target] == 1;
                return true;
            }
        }
    }
    memo[target] = -1;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n;
    vector<int> arr = {1, 2, 3}, memo(100, 0);
    t = 5;
    cout << canSum(arr, t, memo);
    return 0;
}