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
    int it, k; cin >> it >> k;
    int n = it;
    if(k == 0){
        p(0);
        return;
    }
    k -= n;
    if(k <= 0){
        p(1);
        return;
    }
    n--;
    vi v;
    int cnt = 1;
    for(int i = n; i >= 1; i--){
        v.push_back(i);
        v.push_back(i);
    }
    for(int i = 0; i< v.size(); i++){
        k -= v[i];
        cnt ++;
        if(k <= 0){
            p(cnt);
            return;
        }
    }
    p(it + it - 1);
}

signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}