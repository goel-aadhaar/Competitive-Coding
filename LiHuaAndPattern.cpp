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
    int n , k; cin >> n >> k;
    vvi v(n , vi (n)); for(int i = 0; i < n; i++) for(int j = 0; j < n; j++)  cin >> v[i][j];

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            if(v[i][j] != v[n - i - 1][n - j - 1]) cout<<i<<" "<<j , cnt ++;
        }
    }
    if(cnt / 2 > k){
        NO
    } else {
        if((k - cnt / 2) & 1) NO
        else YES
    }
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}