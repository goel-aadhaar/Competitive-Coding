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

int n, m;
vi present(100005);
vvi adj(100005);
vector<bool> visited(100005, false);

void fn(int node, int cat, int &cnt) {
    visited[node] = true;

    if (cat > m) return;

    bool flag = true;
    for (auto neighbour : adj[node]) {
        if (!visited[neighbour]) {
            flag = false;
            if (present[neighbour] == 0)
                fn(neighbour, 0, cnt);
            else
                fn(neighbour, cat + present[neighbour], cnt);
        }
    }

    if (flag) cnt++;
}

void solve() {
    cin >> n >> m;
    int cnt = 0;

    for (int i = 1; i <= n; i++) cin >> present[i];

    for (int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    fn(1, present[1], cnt);
    cout << cnt << endl;
}

signed main() {
    fastio;
    solve();
}
