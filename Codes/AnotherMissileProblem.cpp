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

    vector<pair<int , double>> v(n);
    for(int i = 0; i < n ; i ++) cin >> v[i].second;
    for(int i = 0; i < n ; i ++) cin >> v[i].first;
    // sort(v.begin() , v.end());
    double sum = 0;
    for(int i = 0; i < n ; i ++){
        if(v[i].first >= k) sum += v[i].second;
    }
    // p(sum);
    for(int i = 0; i < n ; i ++){
        double ans = 0;
        if(v[i].first >= k) {
            ans = v[i].second / sum;
        }
        cout<<setprecision(9)<<fixed<<ans<< " ";
    }
}
signed main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}