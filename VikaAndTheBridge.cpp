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
    int n , k; cin >> n >> k;
    vi v(n); for(int i = 0; i < n; i++) cin >> v[i];
    vvi cntr(k);
    for(int i = 0; i < n; i++){
        cntr[v[i] - 1].push_back(i);
    }
    int lo = 0 , hi = 2e5 , ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        int cnt = 0 , mx = 1;
        bool flag = false , final = false;
        for(int i = 0; i < k; i ++){
            if(cntr[i].empty()) continue;
            flag = true;
            mx = 1;
            if(cntr[i][0] > mid){
                // cout<<"x"<<" "<<i<<endl;
                if(cntr[i][0] > 2 * mid + 1) continue;
                else mx--;
            } 
            if((n - cntr[i].back() - 1) > mid){
                // cout<<"y"<<" "<<i<<endl;
                if((n - cntr[i].back() - 1) > 2 * mid + 1 || mx <= 0){
                    continue;
                    cout<<"p";
                }
                else mx--;
            }
            // cout<<"q"<<endl;
            for(int j = 1; j < cntr[i].size(); j++){
                if(cntr[i][j] - cntr[i][j - 1] > mid + 1) {
                    if(cntr[i][j] - cntr[i][j - 1] > 2 * mid + 2 || mx <= 0){
                        flag = false;
                        // cout<<"here"<<i<<" "<<j<<" "<<mid<<endl;
                        break;
                    }
                    else mx--;
                }   
            }
            if(flag) {
                final = true;
                // cout<<"there" <<i<<" "<<mid<<endl;
                break;
            }
        }
        if(final){
            ans = mid;
            hi = mid - 1;
        }
        else lo = mid + 1;
    }
    p(ans);
}
signed main() {
    fastio;
    int t; cin >> t;
    while (t--)
        solve();
}