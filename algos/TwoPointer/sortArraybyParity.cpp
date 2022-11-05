/*Problem Link
https://leetcode.com/problems/sort-array-by-parity/
*/

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

void swap(int &l, int &r)
{
    l = l + r;
    r = l - r;
    l = l - r;
}
vector<int> sortArrayByParity(vector<int> &nums)
{
    int l = 0, r = nums.size() - 1;
    while (l < r)
    {
        if (nums[l] % 2 != 0)
        {
            if (nums[r] % 2 == 0)
            {
                swap(nums[l], nums[r]);
                l++;
                r--;
            }
            else
            {
                r--;
            }
        }
        else
        {
            l++;
        }
    }
    return nums;
}
void coutvec(vi &a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi arr = {2, 3, 4, 7, 8, 3};
    cout << "before sorting by parity->\n";
    coutvec(arr);
    arr = sortArrayByParity(arr);
    cout << "after sorting by parity->\n";
    coutvec(arr);
    return 0;
}