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
    rev(v);
    vi pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n ; i ++){
        pref[i] = pref[i - 1] + v[i];
        sp(pref[i]);
    }
    cout<<endl;
    int sum = 0;
    for(int i = 0; i < m ; i++){
        int l , r;
        cin >> l >> r;
        r -= l;
        sum += pref[r];
        sp(pref[r]);
    }
    p(sum);
}
signed main() {
    fastio;
        solve();
}