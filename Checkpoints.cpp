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
    int n , m; cin >> n >> m;
    multiset<int> v; 
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.insert(x);
    }
    vector<string> q(m);
    vi idx(m);
    for(int i = 0; i < m; i++) {
        cin >> q[i];
        cin >> idx[i];
    }
    for(int i = 0; i < m; i++){
        if(q[i][0] == 'D'){
            v.erase(v.find(idx[i]));
        }
        else{
            v.insert(idx[i]);
        }
        if(v.empty()){
            p(0);
            continue;
        }
        int l = *(--v.end());
        int f = *(v.begin());
        p(l - f);
    }
}
signed main() {
    fastio;
        solve();
}