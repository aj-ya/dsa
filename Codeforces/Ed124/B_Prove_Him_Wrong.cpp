#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t, n;
    cin >> t;
    while (t--)
    {
        cin>>n;
        if(n>19){cout<<"NO\n";}
        else{
            cout<<"YES\n";
            unsigned long long curr=1;
            while(n--){
                cout<<curr<<' ';
                curr*=3;
            }
            cout<<"\n";
        }
        //do something
    }
    return 0;
}