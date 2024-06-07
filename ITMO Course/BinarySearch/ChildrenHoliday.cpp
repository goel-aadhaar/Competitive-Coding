#include <bits/stdc++.h>
using namespace std;

#define f(i, start, end) for (int i = start; i < end; i++)
#define fs(i, start, end, step) for (int i = start; i < end; i += step)
#define fr(i, start, end) for (int i = start; i > end; i--)
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define vb vector<bool>
#define vvb vector<vb>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'
#define vlli vector<long long int>
#define vvlli vector<vlli>
#define pii pair<int, int>
#define pll pair<long long int, long long int>
#define pss pair<string, string>
#define ceil(a, b) ((a + b - 1) / b)
#define max_arr(arr) *max_element(arr.begin(), arr.end())
#define min_arr(arr) *min_element(arr.begin(), arr.end())
#define sum_arr(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD1 998244353
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
typedef long long lli;
#define BIT(x, i) ((x & (1LL << i)) > 0LL)

bool check(lli mid, vlli &t, vlli &z, vlli &y, lli n, lli m) {
    lli count = 0;
    f(i, 0, n) {
        lli cycle_time = z[i] * t[i] + y[i];
        lli full_cycles = mid / cycle_time;
        lli remaining_time = mid % cycle_time;
        count += full_cycles * z[i];
        count += min(z[i], remaining_time / t[i]);
    }
    return count >= m;
}

void solve() {
    lli m, n;
    cin >> m >> n;
    vlli t(n), z(n), y(n);
    f(i, 0, n) cin >> t[i] >> z[i] >> y[i];
    
    lli lo = 0, hi = 1e18, ans = 0;
    while (lo <= hi) {
        lli mid = lo + (hi - lo) / 2;
        if (check(mid, t, z, y, n, m)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    p(ans);
    
    lli total = 0;
    f(i, 0, n) {
        lli cycle_time = z[i] * t[i] + y[i];
        lli full_cycles = ans / cycle_time;
        lli remaining_time = ans % cycle_time;
        lli tasks_done = full_cycles * z[i] + min(z[i], remaining_time / t[i]);
        sp(min(m, tasks_done));
        m -= min(m, tasks_done);
    }
}

int main() {
    fastio;
    solve();
    return 0;
}
