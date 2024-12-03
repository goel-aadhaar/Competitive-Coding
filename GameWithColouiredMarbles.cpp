#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    vector<int> cnt(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cnt[v[i]]++;
    }

    int a = 0, b = 0, c = 1;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    for (int i = 1; i <= n; i++) {
        if (cnt[i] == 1) {
            pq.push({cnt[i], i});
        }
    }

    while (!pq.empty()) {
        pq.pop();
        if (c == 1) {
            a += 2;
            c = 0;
        } else {
            b += 2;
            c = 1;
        }
    }
    // cout << a << endl;
    for (int i = 1; i <= n; i++) {
        if (cnt[i] > 1) {
            pq.push({cnt[i], i});
            // cout << i << "f" << endl;
        }
    }

    while (!pq.empty()) {
        int x = pq.top().first;     
        int y = pq.top().second;     
        pq.pop();
        a += 1;
        b += 1;
        // cout << a << endl;
    }

    cout << a << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}