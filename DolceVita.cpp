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
    int n , x; cin >> n >> x;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    srt(v);
    int cnt = 0;
    vi pref(n);
    pref[0] = v[0];
    for(int i = 1; i < n; i++){
        pref[i] = v[i] + pref[i - 1];
    }
    while(x){
        int l = upper_bound(pref.begin() , pref.end() , x) - pref.begin();
        if(l == 0){
            if(pref[0] > x) break;
            else {
                cnt++;
                break;
            }
        } else if(l == n){
            cnt += n;
        } else {
            if(pref[l] == x) cnt += l + 1;
            else cnt += l;
        }
        x -= n;
    }
    p(cnt);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}