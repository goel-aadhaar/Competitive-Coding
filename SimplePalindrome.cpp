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
    int x = n / 5;
    int y = n % 5;
    for(int i = 0; i < x; i++) cout << "a";
    if(y) cout << "a" , y--;
    for(int i = 0; i < x; i++) cout << "e";
    if(y) cout << "e" , y--;
    for(int i = 0; i < x; i++) cout << "i";
    if(y) cout << "i" , y--;
    for(int i = 0; i < x; i++) cout << "o";
    if(y) cout << "o" , y--;
    for(int i = 0; i < x; i++) cout << "u";
    if(y) cout << "u" , y--;
    cout << endl;
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}