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
    int n, m; cin >> n >> m;
    int mx = 0;
    for(int i = 0; i < n; i++){
        int l; cin >> l;
        map<int, int> mp;
        for(int j = 0; j < l; j++){
            int x; cin >> x;
            mp[x]++;
        }
        int mn = 0;
        while(mp.find(mn) != mp.end()) mn++;
        mx = max(mx, mn);
    }
    p(mx);
    if(m > mx){
        int sum = mx * (mx + 1);
        sum += (m * (m + 1) / 2) - (mx * (mx + 1) / 2);
        p(sum);
    } else {
        p(m * (m + 1) / 2);
    }
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}