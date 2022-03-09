#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <b; i++)
#define ALL(x) begin(x), end(x)
#define SZ(x) (ll)(x).size()
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, l,r,a;
    cin >> t;
    while (t--)
    {
        cin>>l>>r>>a;
        int x;
        if(l==r)x=r;
        else if(a==1)x=r;
        else
        x=min(max(l,((((r/a)-1)*a)+a-1)),r);
        cout<<(x/a)+x%a<<"\n";
    }
    return 0;
}