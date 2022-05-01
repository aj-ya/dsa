#include <iostream>
using namespace std;
typedef long long int lli;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    lli t, n;
    cin >> t;
    while (t--)
    {
        cin>>n;
        lli k=n/2;
        cout<<n-k<<'\n'; 
        //do something
    }
    return 0;
}