#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector<int>
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    int n;
    cin >> n;
    vi p(n);
    string s;
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--; 
    }
    cin >> s;
    
    vi ans(n, -1);
    vector<bool> isV(n, false);
    
    for (int i = 0; i < n; i++) {
        if (!isV[i]) {
            vector<int> cycle;
            int x = i;
            int cb = 0;
            
            while (!isV[x]) {
                isV[x] = true;
                cycle.push_back(x);
                if (s[x] == '0') cb++;
                x = p[x];
            }
            
            for (int node : cycle) {
                ans[node] = cb;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
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
