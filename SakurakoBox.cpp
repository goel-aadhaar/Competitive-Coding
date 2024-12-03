#include <bits/stdc++.h>
using namespace std;

#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define int int64_t
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define mxv(arr) *max_element(arr.begin(), arr.end())
#define mnv(arr) *min_element(arr.begin(), arr.end())
#define smv(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

// Function to calculate modular inverse using Fermat's Little Theorem
int inv(int a, int mod) {
    int res = 1, power = mod - 2;
    while (power > 0) {
        if (power % 2 == 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        power /= 2;
    }
    return res;
}

void solve() {
    int n; 
    cin >> n;
    vi v(n);
    int sum_v = 0;
    int sum_v_square = 0;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        sum_v += v[i];
        sum_v_square += v[i] * v[i];
        sum_v %= MOD2;
        sum_v_square %= MOD2;
    }

    int sum = (sum_v * sum_v) % MOD2;
    sum = (sum - sum_v_square + MOD2) % MOD2;
    sum = (sum * inv(2, MOD2)) % MOD2;

    int to = (n * (n - 1)) / 2;

    int to_inverse = inv(to, MOD2);

    int result = (sum * to_inverse) % MOD2;

    p(result);
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
