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
    unsigned int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll A[n], B[n], minA[2] = {(ll)1e9 + 1, (ll)1e9 + 1}, minB[2] = {(ll)1e9 + 1, (ll)1e9 + 1};
        REP(i, 0, n)
        {
            cin >> A[i];
            if (A[i] < minA[0])
            {
                minA[1] = minA[0];
                minA[0] = A[i];
            }
            else if (A[i] < minA[1])
            {
                minA[1] = A[i];
            }
        }
        REP(i, 0, n)
        {
            cin >> B[i];
            if (B[i] < minB[0])
            {
                minB[1] = minB[0];
                minB[0] = B[i];
            }
            else if (B[i] < minB[1])
            {
                minB[1] = B[i];
            }
            // do something
        }
        int minsum[2]={(ll)1e9 + 1, (ll)1e9 + 1};
        vector<pi > minpair(2);
        int pair_diff;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j){
                    ull k=abs(A[i]-B[j]);
                if (k < minsum[0])
                {
                minsum[1] = minsum[0];
                minsum[0] = k;
            }
            else if (k < minsum[1])
            {
                minsum[1] = k;
            }
                }
            }
        }
        cout<<minsum[0]+minsum[1]<<"\n";
    }
        return 0;
    }