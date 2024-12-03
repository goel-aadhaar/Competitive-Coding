#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MOD = 1000000007;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> pref(n), ans(n);
    int cnt = 0;
    int mul = 1;
    pref[0] = v[0];
    ans[0] = v[0];
    cout << ans[0] << " ";
    // Processing the first element
    while (v[0] % 2 == 0) {
        v[0] /= 2;
        cnt++;
    }

    for (int i = 1; i < n; i++) {
        // Process the current element
        while (v[i] % 2 == 0) {
            v[i] /= 2;
            cnt++;
        }

        pref[i] = (pref[i - 1] + v[i]) % MOD;

        // Calculate 2^cnt % MOD
        mul = 1;
        for (int j = 0; j < cnt; j++) {
            mul = (mul * 2) % MOD;
        }

        // Compute the maximum sum after redistribution
        ans[i] = max(ans[i - 1] + v[i], (v[i] * mul) % MOD + pref[i - 1]) % MOD;

        cout << ans[i] << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
