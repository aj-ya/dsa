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

void RightRotation(vi &a)
{
    int temp = a[a.size() - 1];
    for (int i = a.size() - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    a[0] = temp;
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
    unsigned int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if(n<k){k%=n;}
        vi a(n),r(k);
        REP(i, 0, n)
            cin >> a[i];
        int j=0;
        REP(i, n-k, n){r[j++]=a[i];}
        REP(i,0,k)cout<<r[i]<<" ";
        REP(i,0,n-k)cout<<a[i]<<" ";
        cout<<"\n";
        //RightRotation(a);
        //coutvec(a);
        // do something
    }
    return 0;
}