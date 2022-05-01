#include <bits/stdc++.h>
#define REP(i, a, b) for (ull i = a; i < b; i++)
#define MOD 1000000007

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ull t, n, d;
    cin >> t;
    while (t--)
    {
        cin >> n >> d;
        ull A[n], B[n];
        REP(i, 0, n)
        cin >> A[i];
        REP(i, 0, n)
        cin >> B[i];
        ll max=LLONG_MIN,curr=0;
        for(ull i=0;i<n-1;i++){
            for(ull j=i+1;j<n;j++){
                if(A[i]>j+1)continue;
                //cout<<i<<" "<<A[i]<<" "<<j<<"\n";
                curr=((j+1)*(i+1))-d*(B[j]^B[i]);
                //cout<<curr<<'\n';
                if(curr>max){max=curr;}
            }
        }
        cout<<max<<"\n";
        // do something
    }
    return 0;
}