#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
// #define int int64_t
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
    int no = n * (n - 1) / 2;
    vi v(no); for(int i = 0; i < no; i++) cin >> v[i];
    map<int , int> mp;
     for(int i = 0; i < no; i++){
        mp[v[i]]++;
     }
    set<int>s(v.begin() , v.end());
    vector<int>ans;

    for(auto it : s){
        int occ = mp[it];
        int val = it;
        while(occ > 0){
            ans.push_back(val);
            occ -= (n - ans.size());
        }
    }
    int mx = mxv(ans);
    while(ans.size() < n){
        ans.push_back(mx);
    }
    for(int i = 0; i < ans.size() ; i++){
        sp(ans[i]);
    }
    cout << endl;
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}