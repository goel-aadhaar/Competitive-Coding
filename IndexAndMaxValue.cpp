#include <bits/stdc++.h>
using namespace std;

#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " ";
#define endl '\n'

#define mxv(arr) *max_element(all(arr))
#define mnv(arr) *min_element(all(arr))
#define smv(arr) accumulate(all(arr), 0LL)
#define srt(arr) sort(all(arr))
#define rev(arr) reverse(all(arr))

#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_val = *max_element(all(a));
    for (int i = 0; i < m; i++) {
        char ch;
        int l, r;
        cin >> ch >> l >> r;
        if(l > max_val){
            sp(max_val);
             continue;
        }
        max_val = -1e5;
        for(int i = 0; i < n; i++){
            if(a[i] <= r && a[i] >= l) {
                if(ch == '+') a[i]++;
                else a[i]--;
            }
            max_val = max(max_val , a[i]);
        }
        sp(max_val);
    }
    cout << endl;
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