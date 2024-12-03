#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
// #define vi vector<int>
// #define vvi vector<vi>
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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n , vector<int> (n));
    vector<string> str(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    if(n == m){
        p(str[0][0]);
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            v[i][j] = str[i][j] - '0';
        }
    }
    int ns = n / m;
    vector<vector<int>> ans(ns , vector<int> (ns));
    int a = 0, b = 0;
    for (int i = 0; i < n; i += m) {
        b = 0;
        for (int j = 0; j < n; j += m) {
            ans[a][b] = v[i][j];
            b++;
        }
        a++;
    }
    for (int i = 0; i < ns; i++) {
        for (int j = 0; j < ns; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}