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

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int v = 10;

    // adjacency matrix;
    int adj_matrix[v][v];
    memset(adj_matrix, 0, sizeof(adj_matrix));
    // using vectors
    vector<vector<int>> adj_matrix_vector(v, vector<int>(v, 0));

    // edge-list;
    vector<pair<int, int>> edge_list(v * v);

    // adjacency list;
    vector<vector<int>> adj_list(v);
    return 0;
}