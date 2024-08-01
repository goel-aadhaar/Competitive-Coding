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

void solve() {
    int n, m;
    cin >> n >> m;

    string str, s;
    cin >> str >> s;

    vi f(m), l(m);
    for (int i = 0; i < m; i++) {
        cin >> f[i] >> l[i];
        f[i]--;
        l[i]--;
    }

    vi cnta(26), cntb(26);

    vi pref(n);
    if (str[0] != s[0]) {
        pref[0] = 1;
    } 
    else {
        pref[0] = 0;
    }
    cnta[str[0] - 'a']++;
    cntb[s[0] - 'a']++;
    for (int i = 1; i < n; i++) {
        cnta[str[i] - 'a']++;
        cntb[s[i] - 'a']++;
        if(str[i] == s[i]) pref[i] = pref[i - 1];
        else if(cntb[s[i] - 'a'] == cnta[s[i] - 'a']) pref[i] = pref[i - 1] - 1;
        else pref[i] = pref[i - 1] + (cntb[s[i] - 'a'] > cnta[s[i] - 'a'] ? 1 : 0);
    }
    for (int i = 0; i < m; i++) {
        if (f[i] == 0) {
            cout << abs(pref[l[i]]) << endl;
        } 
        else {
            cout << abs(pref[l[i]] - pref[f[i] - 1]) << endl;
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}