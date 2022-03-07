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
    unsigned int t;
    ull n;
    cin >> t;
    while (t--)
    {
        ull count=0;
        cin>>n;
        // for(ull i =1;i<n;i++){
        //     for(ull j=i;j<n;j++){
        //         if(gcd(j*j,i)!=1)continue;
        //         else{
        //             ull area=i*j/2;
        //             if(area%6==0 && area%28==0)continue;
        //             long double k=sqrt(pow(i,2)+pow(j,2));
        //             if(((ll)k)!=k)continue;
        //             if(gcd((ll)k,j)!=1)continue;
        //             count++;
        //         }
        //     }
        // }
        cout<<count<<"\n";
        //do something
    }
    return 0;
}