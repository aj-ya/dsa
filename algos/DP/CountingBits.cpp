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

void coutvec(vi& a)
{
    for(int i=0;i<a.size();i++)
        cout << a[i] << " ";
    cout << "\n";
}

//Return an array[n+1] with the i'th[0,n] position storing the number of set bits in the binary representation of i.
vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        if(n!=0)
        for(int i=1;i<=n;i++)
                ans.push_back(ans[(i/2 )]+((i%2!=0)?1:0));
    return ans;
    }
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n;
    cin >> t;
    while (t--)
    {
        cin>>n;
        vector ans=countBits(n);
        coutvec(ans);
        //do something
    }
    return 0;
}