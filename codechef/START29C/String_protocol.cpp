#include <bits/stdc++.h>
#define REP(i,a,b) for (int i = a; i <b; i++)

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
        string s;
        cin>>s;
        int count=0;
        REP(i,0,n){
            if(s[i]==s[i+1]){i++;}
            count++;
        }
        cout<<count<<"\n";
        //do something
    }
    return 0;
}