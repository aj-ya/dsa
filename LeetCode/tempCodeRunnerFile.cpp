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

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int total_size = nums1.size() + nums2.size();
    int i = 0, j = 0;
    double ans = 0;
    while (i < nums1.size() && j < nums2.size() && i + j < total_size / 2)
    {
        if (nums1[i] < nums2[j])
            i++;
        else
            j++;
    }
    if (i == nums1.size())
    {
        while (i + j < total_size / 2)
        {
            j++;
        }
        if (total_size % 2 == 0)
        {
            ans = (nums2[j] + nums2[j + 1]);
            cout << ans << "a ";
            ans /= 2;
        }
        else
            ans = nums2[j];
    }
    else if (j == nums2.size())
    {
        while (i + j < total_size / 2)
        {
            i++;
        }
        if (total_size % 2 == 0)
        {
            ans = (nums1[i] + nums1[i + 1]);
            cout << ans << " ";
            ans /= 2;
        }
        else
            ans = nums1[i];
    }
    else if (i + j == total_size / 2)
    {
        cout<<ans<<" ";
        if (total_size % 2 == 0)
        {
            ans = (nums1[i] < nums2[j]) ? nums1[i++] : nums2[j++];
            if (i == nums1.size())
                ans += nums2[j];
            else if (j == nums2.size())
                ans += nums1[i];
            else
                ans += (nums1[i] < nums2[j]) ? nums1[i] : nums2[j];
            cout << ans << " ";
            ans /= 2;
        }
        else
        {
            cout << ans << " ";
            ans = (nums1[i] < nums2[j]) ? nums1[i] : nums2[j];
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi a = {1, 2, 3, 4, 5, 6, 7, 8}, b = {9, 10, 11, 12, 13, 14, 15, 16};
    cout << findMedianSortedArrays(a, b);
    return 0;
}