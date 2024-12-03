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
    int mng = INT_MAX , mxl = INT_MIN;
    vector<pair<char , int>> v(n); 
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        if(v[i].first == 'G') mng = min(mng , v[i].second);
        if(v[i].first == 'L') mxl = max(mxl , v[i].second);

    }
    int cnt = 0;
    for(int i = 0 ; i < n; i ++){
        if(v[i].second >= mng && v[i].second <= mxl) cnt++;
    }
    p(n - cnt);

}
signed main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}