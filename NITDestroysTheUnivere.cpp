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

void solve() {
    int n; cin >> n;
    vi v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];
    int cnt = 1;
    int i = 0 , j = n - 1;
    while(i < n && v[i] == 0) i++;
    while(j >= 0 && v[j] == 0) j--;
    if(j < i) {
        p(0);
        return;
    }
    for(int p = i; p <= j; p++){
        if(v[p] == 0) cnt++;
    }
    p(cnt == 1 ? 1 : 2);
}

signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}