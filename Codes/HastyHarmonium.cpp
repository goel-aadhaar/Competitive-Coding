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
    string str;
    cin >> str;
    int mndx = 0;
    for(int i = 0; i < str.length() - 1; i++){
        if(str[mndx] > str[i]) mndx = i;
    }
    string s = "";
    s += str[mndx];
    int sdx = mndx + 1;
    for(int i = mndx + 1; i < str.length(); i++){
        if(str[sdx] > str[i]) sdx = i;
    }
    s += str[sdx];
    p(s);

}
signed main() {
    fastio;
    // int t; cin >> t;
    // while (t--)
        solve();
}