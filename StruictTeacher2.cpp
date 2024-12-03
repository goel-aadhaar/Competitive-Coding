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
    int n, m, q; cin >> n >> m >> q;
    vi b(m); 
    for(int i = 0; i < m; i++) cin >> b[i];
    srt(b);
    for(int i = 0; i < q; i++){
        int a;
        cin >> a;
        if(a < b[0]){
            p(b[0] - 1);
        } 
        else if(a > b.back()) {
            p(n - b.back());
        }
        else{
            int l = lower_bound(b.begin() , b.end(), a) - b.begin();
            
            p((b[l] - b[l - 1]) / 2);
        }
    } 
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}