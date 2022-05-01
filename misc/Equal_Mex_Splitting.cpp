#include<bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    ans += (x == 0);
  }
  cout << max(ans, n - ans) << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}