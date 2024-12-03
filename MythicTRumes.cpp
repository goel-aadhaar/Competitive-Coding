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

void solve() {
    int n, m; 
    cin >> n >> m;
    
    vector<string> s(n), v(m);
    
    for (int i = 0; i < n; i++) {
        string str, num = "";
        cin >> str;
        for (char c : str) {
            if (c >= 'a' && c <= 'c') num += '2';
            else if (c >= 'd' && c <= 'f') num += '3';
            else if (c >= 'g' && c <= 'i') num += '4';
            else if (c >= 'j' && c <= 'l') num += '5';
            else if (c >= 'm' && c <= 'o') num += '6';
            else if (c >= 'p' && c <= 's') num += '7';
            else if (c >= 't' && c <= 'v') num += '8';
            else if (c >= 'w' && c <= 'z') num += '9';
        }
        s[i] = num;
    }
    
    srt(s);
    
    for (int i = 0; i < m; i++) {
        cin >> v[i];
        
        auto l = lower_bound(s.begin(), s.end(), v[i]);
        
        string np = v[i];
        np.back() = v[i].back() + 1;
        
        auto r = lower_bound(s.begin(), s.end(), np);
        
        p(r - l);  
    }
}

signed main() {
    fastio;
    solve();
}
