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

void swap(int &a, int &b)
{
    a += b;
    b = a - b;
    a = a - b;
}
void bubble_sort(vi &arr)
{
    REP(i, 0, arr.size() - 1)
    {
        REP(j, i + 1, arr.size())
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}
void coutvec(vi& a)
{
    for(int i=0;i<a.size();i++)
        cout << a[i] << " ";
    cout << "\n";
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vi arr = {1, 2, 3, 5, 66, 32, 12, 12, 3, 4};
    cout<<"Before Swap->\n";
    coutvec(arr);
    cout<<"After Swap->\n";
    bubble_sort(arr);
    coutvec(arr);
    return 0;
}