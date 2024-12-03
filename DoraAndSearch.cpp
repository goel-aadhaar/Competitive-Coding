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
    int n; cin >> n;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    vi s = v;
    srt(s);
    int i = 0 , j = n - 1 , a = 0 ,  b = n - 1;
    while(i < j){
        if(v[i] == s[a]) i++ , a++;
        else if(v[j] == s[b]) j-- , b --;
        else if(v[i] == s[b]) i++ , b--;
        else if(v[j] == s[a]) j-- , a++;
        else {
            sp(i + 1);
            sp(j + 1);
            cout << endl;
            return;
        }
    }
    p(-1);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}