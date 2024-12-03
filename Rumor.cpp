#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define int int64_t
#define vi vector<int>
#define vvi vector<vi>
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl;
#define sp(x) cout << (x) << " "
#define endl '\n'
#define mxv(arr) *max_element(arr.begin(), arr.end())
#define mnv(arr) *min_element(arr.begin(), arr.end())
#define smv(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void dfs(vector<vector<int>>& link, vector<int>& isVisited, int& mn, vector<pair<int, int>>& v, int& idx) {
    isVisited[idx] = 1;
    mn = min(mn, v[idx].first);
    for (int it : link[idx]) {
        if (!isVisited[it]) {
            mn = min(mn, v[it].first);
            dfs(link, isVisited, mn, v, it);
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> v(n); 
    for (int i = 0; i < n; i++) cin >> v[i].first, v[i].second = i;
    vector<vector<int>> link(n);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        link[a].push_back(b);
        link[b].push_back(a);
    }
    vi isVisited(n, 0);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (!isVisited[i]) {
            int mn = INT_MAX;
            dfs(link, isVisited, mn, v, i);
            sum += mn;
        }
    }
    p(sum);
}

signed main() {
    fastio;
        solve();
    return 0;
}