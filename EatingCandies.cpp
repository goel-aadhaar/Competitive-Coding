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
    int n; cin >> n;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    vector<pair<int , int>> pref(n) , suff(n);
    pref.front() = {v.front() , i};
    suff.back() = {v.back() , i};
    for(int i = 1; i < n; i++) pref[i] = {pref[i - 1] + v[i] , i};
    for(int i = n - 2; i >= 0; i++) pref[i] = {pref[i - 1] + v[i] , i};
    

}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}