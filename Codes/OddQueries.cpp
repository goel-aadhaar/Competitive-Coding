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
    int n , qe; cin >> n >> qe;
    vvi q; vi v(n) , pref(n);
    int sum = 0;   
    for(int i = 0; i < n; i++) cin >> v[i] , sum += v[i];
    for(int i = 0; i < qe; i++){
        int l , r , k;
        cin >> l >> r >> k;
        q.push_back({l -  1, r - 1, k});
    }
    pref[0] = v[0];
    for(int i = 1; i < n; i ++){
        pref[i] = v[i] + pref[i - 1];
    }
    for(int i = 0; i < qe; i++){
        if(q[i][0] != 0){
            if((sum + pref[q[i][0] - 1] - pref[q[i][1]] + (q[i][1] - q[i][0] + 1) * q[i][2]) & 1) YES
            else NO
        }
        else {
            if((sum - pref[q[i][1]] + (q[i][1] + 1) * q[i][2]) & 1) YES
            else NO
        }
        
    }

}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}