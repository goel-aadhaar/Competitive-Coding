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
    vi q(m); for(int i = 0; i < m; i++) cin >> q[i];
    vi up(n) , pref(n);
    up[0] = v[0];
    pref[0] = v[0];
    for(int i = 1 ; i < n; i++){
        up[i] = max(up[i - 1] , v[i]);
        pref[i] = pref[i - 1] + v[i];

    }
    for(int i = 0; i < m; i ++){
        int idx = upper_bound(up.begin() , up.end() , q[i]) - up.begin();
        if(idx == n) {
            sp(pref.back());
        } else if(idx == 0){
            if(v[idx] == q[i]){
                sp(pref[idx]);
            } else {
                sp(0);
            }
        } else {
            if(v[idx] == q[i]){
                sp(pref[idx]);
            } else {
                sp(pref[idx - 1]);
            }
        }
    }
    cout << endl;
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}