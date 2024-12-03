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
void solve() {
    int n , m; cin >> n >> m;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    srt(v);
    vi pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n; i++) pref[i] = pref[i - 1] + v[i];
    int ans = 0 , sum = 0 , temp = 0;
    for(int i = 0; i < n; i++){
        temp = ((i == 0) ? m : m + pref[i - 1]);
        int p = upper_bound(all(v) , v[i] + 1) - v.begin() - 1;
        int q = upper_bound(all(pref) , temp) - pref.begin() - 1;
        if(q < i) continue;
        if(q < p) ans = max(ans , pref[q] - ((i == 0) ? 0 : pref[i - 1]));
        else ans = max(ans , pref[p] - ((i == 0) ? 0 : pref[i - 1]));
    }
    p(ans);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}