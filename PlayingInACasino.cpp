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
    vvi v(m , vi (n)); 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j ++){
            cin >> v[j][i];
        }
    }
    for(int i = 0; i < m; i++) srt(v[i]);
    vvi pref(m , vi (n)); 
    for(int i = 0; i < m; i++) {
        pref[i][0] = 0;
        for(int j = 1; j < n; j ++){
            pref[i][j] = pref[i][j - 1] + (v[i][j] - v[i][j - 1]);
        }
    }
    int sum = 0;
    for(int i = 0; i < m; i++) {
        int total = smv(pref[i]);
        int iniSum = 0;
        for(int k = 0; k < n - 1; k++){
            iniSum += total;
            total -= (n - k - 1) * (v[i][k + 1] - v[i][k]);
        }
        sum += iniSum;
    }
    p(sum);

}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}