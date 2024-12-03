#include <bits/stdc++.h>
using namespace std;
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    if (n == 1) {
        YES
        return;
    }

    set<int> s;
    s.insert(v[0]);

    for (int i = 1; i < n; i++) {
        int seat = v[i];
        if (s.count(seat - 1) || s.count(seat + 1)) {
            s.insert(seat);
        } 
        else {
            NO
            return;
        }
    }
    YES
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--)
        solve();
}
