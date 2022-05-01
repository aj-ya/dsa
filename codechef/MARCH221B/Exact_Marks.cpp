#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t;
    ll n,m;
    cin >> t;
    while (t--)
    {
        cin>>n>>m;
        ll c,w,nt;
        if(m%3==0){c=m/3;w=0;}
        else {c=(m/3)+1;w=3-m%3;}
        nt=n-w-c;
        if(nt>=0)
            cout<<"YES\n"<<c<<" "<<w<<" "<<nt<<"\n"; 
        else
            cout<<"NO\n";
        //do something
    }
    return 0;
}