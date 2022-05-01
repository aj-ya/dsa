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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n, q, l, r;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        int D[n + 1];
        REP(i, 1, n + 1)
        {
            if (a[i - 1] <= b[i - 1])
                D[i] = (b[i - 1] - 'a') - (a[i - 1] - 'a');
            else
                D[i] = 26 - (a[i - 1] - 'a') + (b[i - 1] - 'a');
            //cout << a[i - 1] << " " << b[i - 1] << D[i] << "\n";
        }
        while (q--)
        {
            bool ans = false;
            cin >> l >> r;
            if (l == r)
                ans = true;
            else
            {
                bool flag=false;
                for(int i=l;i<r;i++){
                    if(D[i]!=0){
                        if(D[i]!=D[i+1])
                            {flag=true;break;}
                    }
                }
                ans=(flag)?false:true;
            }
             (ans)?cout<<"Yes":cout<<"No";
                cout<<"\n";
        }
        // do something
    }
    return 0;
}