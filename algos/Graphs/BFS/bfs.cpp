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

void bfs(vector<vector<int>> &adj, int source, vector<int> &p, vector<int> &d)
{
    int n = adj.size();
    queue<int> q;
    vector<bool> visited(n, false);
    assert(source >= 0 && source < n);
    visited[source] = true;
    q.push(source);
    p[source] = -1; // source, thus no parents and distance=0
    d[source] = 0;
    while (!q.empty())
    {
        int v = q.front(); // to be explored
        q.pop();
        for (int i : adj[v])
        {
            if (!visited[i])
            {
                q.push(i);
                p[i] = v;
                d[i] = d[v] + 1; // parent + 1
                visited[i] = true;
            }
        }
    }
}

void display_path(vector<int> &p, vector<int> &d, int v)
{
    // assuming v is visited
    vector<int> path;
    for (int c = v; c != -1; c = p[c])
        path.push_back(c);
    reverse(path.begin(), path.end());
    cout << "\npath:\t";
    int i;
    for (i = 0; i < path.size() - 1; i++)
    {
        cout << path[i] << "->";
    }
    cout << path[i] << "\n";
}

void bfs(vector<vector<int>> &adj, int source)
{
    int n = adj.size();
    queue<int> q;
    vector<bool> visited(n, false);
    assert(source >= 0 && source < n);
    visited[source] = true;
    q.push(source);
    cout << source << " ";
    while (!q.empty())
    {
        int v = q.front(); // to be explored
        q.pop();
        for (int i : adj[v])
        {
            if (!visited[i])
            {
                q.push(i);
                cout << i << " ";
                visited[i] = true;
            }
        }
    }
}

//       1 - 0
//     /  |
// 4 - 2  3
//     |   \
//     5    6
// graph
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<vector<int>> adj(7); // adjacency list
    int n = adj.size(), s;      // number of nodes & source vertex
    vector<int> p(n), d(n);     // parent and distance arrays to find shortest paths
    adj[0].push_back(1);
    adj[1].push_back(0);
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[3].push_back(1);
    adj[3].push_back(6);
    adj[4].push_back(2);
    adj[5].push_back(2);
    adj[6].push_back(3);
    bfs(adj, 0); // 0 1 2 3 4 5 6
    bfs(adj, 0, p, d);
    display_path(p, d, 5);
    return 0;
}