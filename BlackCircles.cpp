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
int calculateDistance(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;
    return dx * dx + dy * dy;
}
void solve() {
    int n; cin >> n;
    vector<pair<int , int>> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
    int xs , ys , xt , yt;
    cin >> xs >> ys >> xt >> yt;
    int diff = calculateDistance(xs , ys , xt , yt);
    for(int i = 0; i < n; i ++){
        if(calculateDistance(v[i].first , v[i].second , xt , yt) <= diff) {
            NO
            return;
        }
    }
    YES
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}