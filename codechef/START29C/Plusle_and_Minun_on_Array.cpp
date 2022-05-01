#include <bits/stdc++.h>
#define REP(i,a,b) for (ll i = a; i <b; i++)
typedef long long ll;
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t, n;
    cin >> t;
    while (t--)
    {
        cin>>n;
        ll A[n];
        ll min_add=(ll)1e9;
        ll max_sub=-1;
        ll sum=0;
        REP(i,0,n){
            cin>>A[i];
        if(i%2==0){
            sum+=abs(A[i]);
            if(abs(A[i])<min_add)min_add=abs(A[i]);
        }
        else{
            sum-=abs(A[i]);
            if(abs(A[i])>max_sub)max_sub=abs(A[i]);
        }
        }
        if(min_add<max_sub)
        cout<<sum+2*(max_sub)-2*(min_add)<<"\n";
        else 
        cout<<sum<<"\n";
        //do something
    }
    return 0;
}