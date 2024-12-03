#include <bits/stdc++.h>
using namespace std;

#define ll(i , s , n)        for(int i = s; i < n; i++)
#define all(arr)             arr.begin(), arr.end()
#define vi                   vector<int>
#define vvi                  vector<vi>
#define int                  int64_t
#define sp(x)                cout << (x) << " ";
#define p(x)                 cout << (x) << endl;
#define endl                 '\n'
#define fastio               ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    int n, m; 
    cin >> n >> m;
    
    if (n <= 0 || m <= 0) {
        return; 
    }

    vvi v(n, vi(m)); 

    int x = 0;
    for (int i = 0; i < m; i++) {
        int cnt = x % m;
        for (int j = 0; j < n; j++) {
            v[j][i] = cnt;
            cnt = (cnt + 1) % m;
        }
        x++;
    }
    reverse(v[0].begin() , v[0].end());
    
    vi cntr(m + 1, 0); 
    for (int i = 0; i < m; i++) {
        vi cnt(n + 1, 0);
        for (int j = 0; j < n; j++) {
            if (v[j][i] <= n) {  
                cnt[v[j][i]]++;
            }
        }
        int mex = 0;
        while (cnt[mex] > 0) mex++;
        cntr[mex]++;
    }
    
    int mexf = 0;
    while (cntr[mexf] > 0) mexf++;
    p(mexf);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
                sp(v[i][j]);
            }
        cout << endl;
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
