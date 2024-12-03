#include<bits/stdc++.h>
using namespace std;
#define int int64_t
bool check(vector<int> &v , int &mid , int &k){
    int sum = 0;
    for(int i = 0; i < v.size() ; i ++){
        sum += min(v[i] , mid);
    }
    return sum / mid >= k;
}
void solve(){
    int k , n;
    cin >> k >> n;
    vector<int> v(n);
    for(int i = 0; i < n ; i++ ) cin >> v[i];
    int lo = 0 , hi = 1e11 , ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo) / 2;
        if(check(v , mid , k)) {
            ans = mid;
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    cout << ans << endl;
}
signed main(){
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    // int t; cin >> t;
    // while(t--)
        solve();
}
    