#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

typedef long long lli;

lli lcmArray(const vector<lli> &arr) {
    lli result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = (result / __gcd(result, arr[i])) * arr[i];
        if (result == 0) break;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vector<lli> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    lli lcm = lcmArray(v);
    vector<lli> ans(n);
    lli anssum = 0;
    for (int i = 0; i < n; ++i) {
        ans[i] = lcm / v[i];
        anssum+=ans[i];
    }
    lli mn = 1e18;
    for (int i = 0; i < n; ++i) {
        mn = min(mn, ans[i] * v[i]);
    }

    if (mn <= anssum) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

int main() {
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