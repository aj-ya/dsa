/*problem link
https://leetcode.com/problems/container-with-most-water/
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

int maxArea(vector<int> &height)
{
    int max_area = 0, l = 0, r = height.size() - 1;
    //l:=0 and r:=size-1 maximizes length now we just have to iterate over the array to maximize the height(area=length*height) 
    while (l < r)
    {
        int container_area = (r - l) * min(height[l], height[r]);
        if (max_area < container_area)
        {
            max_area = container_area;
        }
        (height[l] < height[r]) ? l++ : r--;
    }
    return max_area;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi arr= {8,1,2,3,8}; 
    cout<<maxArea(arr);
    return 0;
}