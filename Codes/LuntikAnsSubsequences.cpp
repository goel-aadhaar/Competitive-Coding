#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define int int64_t
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl
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
    int cnt0 = 0 , cnt1 = 0;
    vi v(n); for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for(int i = 0; i < n; i++) {
        if(v[i] == 0) cnt0 ++;
        else if(v[i] == 1) cnt1 ++;
    }
    // p(cnt0);
    // p(cnt1);
    if(!cnt0 && !cnt1){
        p(0);
        return;
    }
    cnt0 && cnt0 != 1? p((int)cnt1 * (int)pow(2 , cnt0)) : p(cnt1 * (int)pow(2 , cnt0));

}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}