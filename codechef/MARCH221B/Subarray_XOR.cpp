#include <bits/stdc++.h>
#define MOD 998244353
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

// void xorString(string from, string &to)
// {
//     // while(to.length()<from.length())
//     // {
//     //     to='0'+to;
//     // }
//     ll i = to.length() - from.length(), j = 0;
//     for (; i < to.length(); i++)
//     {
//         if (to[i] == from[j++])
//             to[i] = '0';
//         else
//             to[i] = '1';
//     }
// }

// void xorString(string &from, ll st, ll l, string &to)
// {
//     // while(to.length()<from.length())
//     // {
//     //     to='0'+to;
//     // }
//     ll j = to.length() - l;
//     for (ll i = 0; i < l, j < to.length(); i++)
//     {
//         if (to[j] == from[st + i])
//             to[j] = '0';
//         else
//             to[j] = '1';
//         j++;
//     }
// }

// ull binDec(string &from)
// {
//     ll st = from.length() - 1;
//     ull p = 0, num = 0;
//     while (st >= 0)
//     {
//         if (from[st--] != '0')
//         {
//             num += (1 << p);
//             num %= MOD;
//         }
//         p++;
//     }
//     return num;
// }
ll binDec(ll* v, ll& n)
{
    ll sum = 0,i = 0;
    for(ll j=n-1;j>=0;j--){
        sum=(sum +(ll)(v[j]<<i)%MOD)%MOD;
        i++;
    }
    return sum%MOD;
}

// void coutvec(vector<int> &a)
// {
//     for (int i = 0; i < a.size(); i++)
//         cout << a[i] << " ";
//     cout << "\n";
// }
// long long int SubArraySum(ll arr[], int n)
// {
//     long long int result = 0;
//     for (int i = 0; i < n; i++)
//         result ^= (arr[i] * (i + 1) * (n - i));
//     return result;
// }

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        ll a[n];
        a[0] = (s[0] == '1') ? 1 : 0;
        for (ll i = 1; i < n; i++)
        {
            a[i] = a[i - 1];
            if (s[i] == '1')
                a[i] += (i + 1);
        }
        for (ll i = 1; i < n; i++)
        {
            a[i]=(a[i]&1)?1:0;
        }
        // for(int i=0;i<n;i++){cout<<a[i]<<" ";}
        // cout<<'\n';
        cout<<binDec(a,n)<<'\n';
    }
    return 0;
}