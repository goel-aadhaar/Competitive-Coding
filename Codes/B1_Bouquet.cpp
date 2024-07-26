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
    map<int, int> cnt;
    for (int i = 0; i < n; ++i) {
        cnt[v[i]]++;
    }
    
    vector<pair<int,int>> vp;
    for (auto &pair : cnt) {
        vp.push_back({pair.first, pair.second});
    }
    int mx = 0 mn = INT_MAX;
    int diff = 0;
    int sum1 = 0 , sum2 = 0;
    for(int i = 1; i < vp.size(); i++){
        if(vp[i].first - vp[i - 1].first  > 1) continue;
        sum1 = vp[i].first * vp[i].second;
        sum2 = vp[i - 1].first * vp[i - 1].second;
        mx = sum1 + sum2;
        while(sum1 > k) sum1 -= vp[i];
        while(sum2 > k) sum2 -= vp[i - 1];
        while(sum1 + vp[i-1] <= k) sum1 += vp[i-1];
        while(sum2 + vp[i] <= k) sum2 += vp[i];

        int fre1 = (vp[i].first * vp[i].second - sum1) / vp[i].first;
        int fre2 = (vp[i-1].first * vp[i-1].second - sum1) / vp[i-1].first;
        diff = max()
    }

}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}