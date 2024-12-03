/**
 *    author:  tourist
 *    created: 25.05.2024 10:38:06
**/
#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
#include "algo/debug.h"
#else
#define debug(...) 42
#endif

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
      ans = max(ans, min(a[i], a[i + 1]));
    }
    for (int i = 0; i < n - 2; i++) {
      ans = max(ans, min(a[i], a[i + 2]));
    }
    cout << ans << '\n';
  }
  return 0;
}