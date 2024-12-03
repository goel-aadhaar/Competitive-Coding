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
    int n , m , k , a , b , c; cin >> n >> m >> k >> a >> b >> c;
    if(c > a && c > b){
        p(n - max(a , b));
        return;
    }
    else if(c < a && c < b){
        p(min(a , b) - 1);
        return;
    }
    else {
        p((max(a , b) - min(a , b)) / 2);
    }
    
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}