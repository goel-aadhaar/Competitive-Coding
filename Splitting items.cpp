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
#define srt(arr) sort(arr.begin(), arr.end() , greater<int>())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
void solve() {
    int n , k; cin >> n >> k;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    srt(v);
    for(int i = 1; i < n; i+=2){
        if(k == 0) break;
        v[i] += min(k ,(v[i - 1] - v[i])); 
        k -= min(k ,(v[i - 1] - v[i])); 
    }
    int sumA = 0 , sumB = 0;
    for(int i = 0; i < n; i++){
        if(i & 1) sumB += v[i];
        else sumA += v[i];
    }
    p(sumA - sumB);

}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}