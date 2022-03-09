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
    if (total_size%2==0)
    {
        total_size-=2;
        total_size /= 2;
    }
    else{
        total_size/=2;
    }
    int i = 0, j = 0;
    double ans = 0;
    while (i < nums1.size() && j < nums2.size() && i + j < total_size)
    {
        //cout<<i<<" "<<j<<'\n';
        if (nums1[i] < nums2[j])
            i++;
        else
            j++;
    }
    //cout<<i<<" "<<j<<'\n';
    if (i == nums1.size())
    {
        while (i + j < total_size)
        {
            j++;
        }
        if ((nums1.size() + nums2.size()) % 2 == 0)
        {
            ans = (nums2[j] + nums2[j + 1]);
            ans /= 2;
        }
        else
            ans = nums2[j];
        //cout << ans << "a ";
    }
    else if (j == nums2.size())
    {
        while (i + j < total_size)
        {
            i++;
        }
        if ((nums1.size() + nums2.size()) % 2 == 0)
        {
            ans = (nums1[i] + nums1[i + 1]);
            ans /= 2;
        }
        else
            ans = nums1[i];
        //cout << ans << "a ";
    }
    else if (i + j == total_size)
    {
        if ((nums1.size() + nums2.size()) % 2 == 0)
        {
            //cout<<nums1[i]<<" "<<nums2[j];
            ans = (nums1[i] < nums2[j]) ? nums1[i++] : nums2[j++];
            if (i == nums1.size())
                ans += nums2[j];
            else if (j == nums2.size())
                ans += nums1[i];
            else
                ans += (nums1[i] < nums2[j]) ? nums1[i] : nums2[j];
            // cout << ans << " ";
            ans /= 2;
        }
        else
        {
            //cout << nums1[i]<< " "<<nums2[j]<<" ";
            ans = (nums1[i] < nums2[j]) ? nums1[i] : nums2[j];
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int n, m;
    cin >> n >> m;
    vi a(n), b(m);
    REP(i, 0, n)
        cin >> a[i];
    REP(i, 0, m)
        cin >> b[i];
    sort(ALL(a));
    sort(ALL(b));
    cout << findMedianSortedArrays(a, b);
    return 0;
}