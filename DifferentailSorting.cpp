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
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    if(is_sorted(v.begin() , v.end())) {
        p(0);
        return;
    }
    else if(v[n - 1] < v[n - 2]){
        p(-1);
        return;
    }
    int x = -1 , y = -1;
    for(int i = n - 3; i >= 0; i--){
        if(v[i + 1] - v[i + 2] > v[i + 1]){
            if(v[i] <= v[i + 1]){
                continue;
            } else {
                p(-1);
                return;
            }
        } else {
            x = i + 1;
            y = i + 2;
            break;
        }
    }
    p(n - 2);
    for(int i = 0; i < n - 2; i++){
        v[i] = v[x] - v[y];
        sp(i + 1);
        sp(x + 1);
        sp(y + 1);
        cout << endl;
    }
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}