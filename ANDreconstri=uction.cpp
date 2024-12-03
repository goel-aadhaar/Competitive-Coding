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
    vi v(n - 1); for(int i = 0; i < n - 1; i++) cin >> v[i];
    vi ans(n);
    ans[0] = v[0];
    for(int i = 1; i < n - 1; i++){
        ans[i] = v[i] | v[i - 1];  
    }
    ans[n - 1] = v.back();
    for(int i = 0; i < n - 1; i++){
        if((ans[i] & ans[i + 1]) != v[i]){
            // p(i);
            p(-1);
            return;
        }
    }
    for(int ele : ans){
        sp(ele);
    }
    cout << endl;
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}