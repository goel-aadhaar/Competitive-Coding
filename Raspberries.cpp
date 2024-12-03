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
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    if(k != 4 ){
        int mn = k , mx = 0;
        for(int i = 0; i < n; i++){
            if(v[i] % k == 0){
                p(0);
                return;
            }
            else mx = max(mx , v[i] % k);
        }
        cout << k - mx << endl;
    } else {
        int cnt = 0;
        int mn = 4 , mx = 0;
        for(int i = 0; i < n; i++){
            if(v[i] % 4 == 0) {
                p(0);
                return;
            } else if(!(v[i] & 1)){
                cnt ++;
            }
            mx = max(mx , v[i] % 4);
        }
        if(cnt >= 2) {
            p(0);
            return;
        } else {
            cout << min(4 - mx , 2 - cnt) << endl;
        }
    }
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}