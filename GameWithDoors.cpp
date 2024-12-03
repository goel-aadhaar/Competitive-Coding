#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
// #define int int64_t
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
    int  l1 , r1; cin >> l1 >> r1;
    int  l2 , r2; cin >> l2 >> r2;
    int cml = max(l1 , l2);
    int cmr = min(r1 , r2);
    int cnt = max(0 , cmr - cml);
    if(cml > cmr){
        p(1);
        return;
    }
    
    if(abs(l1 - l2) > 0) cnt++;
    if(abs(r1 - r2) > 0) cnt++;
    
    p(cnt);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}