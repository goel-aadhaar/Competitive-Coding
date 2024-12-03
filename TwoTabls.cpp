#include <bits/stdc++.h>
using namespace std;
#define all(arr) arr.begin(), arr.end()
#define vi vector<int>
#define vvi vector<vi>
#define int int64_t
#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define p(x) cout << fixed << setprecision(9) << x << endl;
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
    int a , b , x1 , y1 , x2 , y2 , w , h;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2 >> w >> h;
    if((a - (x2 - x1)) < w && (b - (y2 - y1)) < h){
        p(-1);
        return;
    }
    double x = max(x1 , a - x2);
    double y = max(y1 , b - y2);
    if(x > w || y > h){
        p(0);
        return;
    }
    // cout<<"-"<<x<<" "<<y<<endl;
    if((a - (x2 - x1)) < w){
        p(h - y);
    } else if( (b - (y2 - y1)) < h){
        p(w - x);
    } else {
        p(min(w - x , h - y));
    }
    // double ans = min(w - x , h - y);
    // p(ans);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}