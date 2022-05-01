#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define MP make_pair
#define REP(i, a, b) for (ll i = a; i < b; i++)
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

void coutvec(vll &a)
{
    for (long long i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "\n";
}

void coutvec(vector<bool> a)
{
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << "\n";
}

ll max_mex = 0;
void solveMex(vector<vector<ll>> &adj, vll &w, vector<bool> &vis, ll curr_mex, ll root)
{
    //cout<<root<<" "<<w[root]<<"\n";
    vis[w[root]] = true;
    //coutvec(vis);
    if (curr_mex == w[root] )
    {
        curr_mex = vis.size() - 1;
        REP(i, 0, vis.size())
        {
            if (vis[i] == false)
            {
                curr_mex = i;
                break;
            }
        }
    }
    if (curr_mex > max_mex)
    {
        max_mex = curr_mex;
    }
    if(curr_mex==max_mex)
        for (ll i = 0; i < adj[root].size(); i++)
        {
            // cout<<st<<" "<<mex<<" "<<adj[st][i]<<"\n";
            solveMex(adj, w, vis, curr_mex,adj[root][i]);
        }
    vis[w[root]] = false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<ll> > adj(n);
        vll w(n);
        vector<bool> v(n+1, false);
        REP(i, 0, n)
            cin >> w[i];
        //coutvec(w); 
        ll src, dst;
        REP(i, 0, n - 1)
        {
            cin >> src >> dst;
            adj[src - 1].PB(dst - 1);
        }
        solveMex(adj,w,v,(w[0]==0)?1:0,0);
        cout << max_mex << "\n";
        max_mex = 0;
        // do something
    }
    return 0;
}