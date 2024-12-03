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
    vi bit(31);
    for(int i = 0; i < 31; i++){
        for(int j = 0; j < n ; j ++){
            if((v[j] >> i) & 1) bit[i]++;
        }
    }
    // for(int i = 0; i < 31; i++){
    //     p(bit[i]);
    // }
    for(int i = 1; i <= n; i++){
        bool flag = true;
        for(int j = 0;  j < 31; j++){
            if(bit[j] % i != 0) {
                flag = false;
                break;
            }
        }
        if(flag) sp(i);
    }
    cout << endl;
}

signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}