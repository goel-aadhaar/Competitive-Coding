#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define int int64_t
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    int n, m; 
    cin >> n >> m;
    vi v(n); 
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        v[i] %= m;
    }

    int cnt = 0;
    multiset<int> s(v.begin(), v.end());
    vi ans;

    if (!s.empty()) {
        int first = *s.rbegin();
        ans.push_back(first);
        s.erase(s.find(first));
    }

    while (!s.empty()) {
        int a = ans.back();
        auto it = s.find(a);

        int complement = m - a;
        auto comp_it = s.find(complement);
        
        if (comp_it != s.end()) {
            ans.push_back(complement);
            s.erase(comp_it);
        } else if (!s.empty()) {
            int next_largest = *s.rbegin();
            ans.push_back(next_largest);
            s.erase(s.find(next_largest));
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
        if ((ans[i] + ans[i + 1]) % m != 0) {
            cnt++;
        }
    }
    cout << endl;
    cout << cnt + 1 << endl;
}

signed main() {
    fastio;
    int t; 
    cin >> t;
    while (t--) {
        solve();
    }
}