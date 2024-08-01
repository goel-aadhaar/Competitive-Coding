#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int64_t>
#define vvi vector<vi>
#define int int64_t
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define p(x) cout << (x) << endl
#define sp(x) cout << (x) << " "
#define endl '\n'
#define mxv(arr) *max_element(arr.begin(), arr.end())
#define mnv(arr) *min_element(arr.begin(), arr.end())
#define smv(arr) accumulate(arr.begin(), arr.end(), 0LL)
#define srt(arr) sort(arr.begin(), arr.end())
#define rev(arr) reverse(all(arr))
#define MOD2 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

void solve() {
    
    string str , s; cin >> str >> s;
    
    vi cnta(26), cntb(26);
    for (int i = 0; i < s.size(); i++) {
        cntb[s[i] - 'a']++;
    }
    
    string final = "";
    for (int i = 0; i < str.size(); i++) {
        if (cntb[str[i] - 'a']) cnta[str[i] - 'a']++;
    }
    for (int i = 0; i < str.size(); i++) {
        if (cntb[str[i] - 'a'] > cnta[str[i] - 'a']) {
            NO;
            return;
        }
        if (cntb[str[i] - 'a'] == cnta[str[i] - 'a']) {
            final += str[i];
        }
        else cnta[str[i] - 'a']--;
    }
    if (final == s) YES;
    else NO;
}

signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}