#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    int n; 
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    int m;
    cin >> m;
    vector<string> strings(m);
    for(int i = 0; i < m; i++) cin >> strings[i];
    
    for(int i = 0; i < m; i++) {
        string s = strings[i];
        if(s.size() != n) {
            cout << "NO" << endl;
            continue;
        }
        
        unordered_map<int, char> fi;
        unordered_map<char, int> sc;
        bool flag = true;
        
        for(int j = 0; j < n; j++) {
            if(fi.count(a[j]) && fi[a[j]] != s[j]) {
                flag = false;
                break;
            }
            if(sc.count(s[j]) && sc[s[j]] != a[j]) {
                flag = false;
                break;
            }
            fi[a[j]] = s[j];
            sc[s[j]] = a[j];
        }
        
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

signed main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
