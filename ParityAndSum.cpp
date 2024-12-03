#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define int int64_t
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << (x) << endl
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
    int mxO = -1 , mxE = -1 , cntO = 0 , cntE = 0;
    for(auto i : v){
        if(i & 1) cntO ++;
        else cntE ++;
    }
    for(auto i : v){
        if(i & 1){
            mxO = max(i , mxO);
        }
        else mxE = max(mxE , i);
    } 
    if(cntO == 0 || cntE == 0) {
        p(0);
        return;
    }

    int mxEE = 0;
    mxEE += mxO;
    vi x;
    for(auto i : v){
        if(!(i & 1) && (i < mxO)){
            mxEE += i;
        }
        else if(!(i & 1)){
            x.push_back(i);
        }
    }
    srt(x);
    for(auto i : x){
        if(i < mxEE) mxEE += i;
        else {
            p(cntE + 1);
            return;
        }
    }
    p(cntE);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}