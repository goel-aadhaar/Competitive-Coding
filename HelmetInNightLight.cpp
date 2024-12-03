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
bool cmp(pair<int , int> p1 , pair<int , int> p2){
    if(p1.first != p2.first) return p1.first < p2.first;
    else return p1.second > p2.second; 
}
void solve() {
    int n , k; cin >> n >> k;
    vector<pair<int , int>> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i].second;
    for(int i = 0; i < n; i++) cin >> v[i].first;
    sort(v.begin() , v.end() , cmp);
    int sum = k , times = n - 1;
    for(int i = 0; i < n; i ++){
        if(v[i].first > k || times <= 0) break;
        sum += min(times , v[i].second) * v[i].first;
        times -= min(times , v[i].second);
    }
    if(times > 0) sum += times * k;
    p(sum);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}