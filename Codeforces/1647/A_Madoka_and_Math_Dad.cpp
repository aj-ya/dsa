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
    unsigned int t, n;
    cin >> t;
    vector<string>arr(1000);
    arr[0]='1';
    arr[1]='2';
    for(int i=2;i<1000;i++){
            if(arr[i-2][0]=='2')
            arr[i]='1'+arr[i-1];
            else 
            arr[i]='2'+arr[i-2];
    }
    while (t--)
    {
        cin>>n;
        cout<<arr[n-1]<<"\n";
        //do something
    }
    return 0;
}