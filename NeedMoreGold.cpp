#include <bits/stdc++.h>
using namespace std;
#define int int64_t
void solve() {
    int w, n;
    cin >> w >> n;
    vector<vector<int>> v(n, vector<int>(3)); 
    vector<int> ans; 

    for (int i = 0; i < n; i++) {
        cin >> v[i][1] >> v[i][0]; 
        v[i][2] = i; 
    }

    multiset<pair<int, int>> st;
    int sum = 0, cnt = 0;
    sort(v.begin(), v.end()); 

    int i = 0; 
    while (i < n) {
        bool flag = false;
        while (i < n && sum >= v[i][0]) {
            flag = true;
            st.insert({v[i][1], v[i][2]}); 
            i++;
        }
        if(!flag) break;
        if (!st.empty()) {
            auto it = prev(st.end()); 
            ans.push_back(it->second); 
            sum += it->first;
            st.erase(it); 
            cnt++; 
        }

        if (sum >= w) break;
    }
    while(sum < w && !st.empty()){
        auto it = prev(st.end()); 
        ans.push_back(it->second); 
        sum += it->first;
        st.erase(it); 
        cnt++; 
    }
    if (sum < w) {
        cout << -1 << endl;
        return;
    }

    cout << cnt << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] + 1 << " "; 
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}