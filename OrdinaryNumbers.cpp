#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define int long long
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
int stoi(string& str) {
    int num = 0;
    for (char c : str) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + (c - '0');
        }
    }
    return num;
}
void solve() {
    int n; cin >> n;
    if(n < 10) {
        p(n);
        return;
    }
    int l = to_string(n).length() , cnt = (l - 1) * 9;
    
    string str = "";
    while(l--) str += '1';
    int num = stoi(str) , p = num;
    while(n >= num) cnt++ , num += p;
    p(cnt);
}

signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}