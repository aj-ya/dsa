#include <bits/stdc++.h>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (ll i = a; i < b; i++)
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

int count = 0;
void coutvec(vi &a)
{
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << "\n";
}
void coutvec(vector<string> &a)
{
  for (int i = 0; i < a.size(); i++)
    cout << a[i] << " ";
  cout << "\n";
}
void coutvec(vll& a)
{
    for(long long  i=0;i<a.size();i++)
        cout << a[i] << " ";
    cout << "\n";
}
string DecimalToBinary(int num)
{
  string str;
  while (num)
  {
    if (num & 1) // 1
      str += '1';
    else // 0
      str += '0';
    num >>= 1; // Right Shift by 1
  }
  reverse(str.begin(), str.end());
  return str;
}
int main()
{
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  ios::sync_with_stdio(0);
  cin.tie(0);
  unsigned int t, n, k;
  cin >> t;
  while (t--)
  {
    cin >> n >> k;
    unsigned long long int j = 1 << n;
    j--;
    vll a(j);
    REP(i, 0, j)
    a[i] = i + 1;
    vector<string> s;
    REP(i, 0, j)
    s.push_back(DecimalToBinary(a[i]));
    // coutvec(s);
    sort(s.begin(), s.end());
    //coutvec(s);
    vll b(j);
    REP(i, 0, j)
    b[i] = stoll(s[i], 0, 2);
    coutvec(b);
    REP(i, 0, j)
    cout<< __builtin_popcount(b[i]) << ",";
    cout << "\n";
    // do something
  }
  return 0;
}