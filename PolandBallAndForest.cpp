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
void dfs(vector<int> &visited , int &idx , vector<int> &v){
    if(visited[idx - 1]) return;
    visited[idx - 1] = 1;
    dfs(visited , v[idx - 1] , v);
}
void solve() {
    int n; cin >> n;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    vi visited(n);
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!visited[i - 1] && !visited[v[i - 1] - 1]){
            // p(i - 1);
            visited[i - 1] = 1;
            cnt ++;
            dfs(visited , v[i - 1] , v);
        }
    }
    p(cnt);
}
signed main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}