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

bool cmp(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    if (get<2>(a) != get<2>(b)) 
        return get<2>(a) < get<2>(b); // Sort by time ascending
    else 
        return get<1>(a) < get<1>(b);  // Sort by cost ascending
}

void solve() {
    int n, q; 
    cin >> n >> q;
    
    vi c(n), m(n), t(n);
    for (int i = 0; i < n; i++) 
        cin >> c[i] >> m[i] >> t[i];
    
    vector<tuple<int, int, int>> vec;
    for (int i = 0; i < n; i++) {
        vec.emplace_back(c[i], m[i], t[i]);
    }
    sort(vec.begin(), vec.end(), cmp);
    
    // Prefix sum to store cumulative coins and costs
    vector<tuple<int, int, int>> pref(n);
    pref[0] = vec[0];
    for (int i = 1; i < n; i++) {
        pref[i] = {get<0>(pref[i - 1]) + get<0>(vec[i]), 
                   get<1>(pref[i - 1]) + get<1>(vec[i]), 
                   get<2>(vec[i])};
    }
    
    for (int i = 0; i < q; i++) {
        int mo, b;
        cin >> mo >> b;

        // Find the upper bound for the time
        int u = upper_bound(pref.begin(), pref.end(), make_tuple(0, 0, mo), 
            [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
                return get<2>(a) < get<2>(b);
            }) - pref.begin();
        
        // Find the upper bound for the cost
        int l = upper_bound(pref.begin(), pref.end(), make_tuple(0, b, 0), 
            [](const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
                return get<1>(a) < get<1>(b);
            }) - pref.begin();

        if (u > 0 && l > 0) {
            // Calculate the maximum coins that can be collected
            p(get<0>(pref[u - 1]) - (l > 0 ? get<0>(pref[l - 1]) : 0));  
        } else {
            p(0);
        }
    }
}

signed main() {
    fastio;
    solve();
}
