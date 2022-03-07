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

int canBePalindrome(int n, string s)
{
    int i = 0, j = n - 1;
    bool flag = true;
    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
        }
        else if (flag)
        {
            if (i + 1 != j)
            {
                if (s[i + 1] == s[j])
                {
                    i += 1;
                    j -=1;
                    flag = false;
                    cout<<"here";
                }
            }
            else if (i != j - 1)
            {
                if (s[i] == s[j - 1])
                {
                    j -= 2;
                    i+=1;
                    flag = false;
                    cout<<"here";
                }
                else
                    return 0;
            }
            else
                return 1;
        }
        else
            return 0;
    }
    return 1;
    // Write your code here.
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    unsigned int t;
    string n = "abaddckba";
    cout << canBePalindrome(4, n);
    return 0;
}
