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

void coutvec(vi &a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "\n";
}

vector<int> howSum(vector<int> &arr, int target, vector<vector<int>> &memo)
{
    vector<int> ans;
    if (memo[target].size() != 0)
        return memo[target];
    for (int i = 0; i < arr.size(); i++)
    {
        if (target - arr[i] > 0)
        {
            ans = howSum(arr, target - arr[i], memo);
            if (ans.size() != 0)
            {
                ans.push_back(arr[i]);
                memo[target] = ans;
                return memo[target];
            }
        }
        else if (target - arr[i] == 0)
        {
            memo[target] = {arr[i]};
            return memo[target];
        }
    }
    return memo[target];
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n;
    vector<int> arr = {2, 1};
    vector<vector<int>> memo(100);
    t = 6;
    vector<int> ans = howSum(arr, t, memo);
    coutvec(ans);
    return 0;
}